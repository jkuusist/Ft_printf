/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:23:11 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/12 11:27:45 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

void	handle_specifier(t_pf *pf)
{
	char 	temp[40];
	char 	*s;
	int		precision;
	int		num;

	if ((pf->format)[pf->index] == 'c' || (pf->format)[pf->index] == 'C')
	{
		while (((pf->flags)->width > 1) && !(pf->flags)->minus_flag) 
		{
			ft_putchar(' ');
			pf->res++;
			(pf->flags)->width--;
		}
		ft_putchar(va_arg(pf->ap, int));
		pf->res++;
		if ((pf->flags)->minus_flag)
			while ((pf->flags)->width > 1)
			{
				ft_putchar(' ');
				pf->res++;
				(pf->flags)->width--;
			}
	}
	if ((pf->format)[pf->index] == 's')
	{
		//POTENTIAL MEMORY LEAK HERE
		//CHECK BEFORE TURNING IN
		s = va_arg(pf->ap, char*);
		ft_putstr_pf(s, *(pf->flags));
		pf->res += ft_strlen(s);
		//ft_putstr_pf(va_arg(pf->ap, char*), *(pf->flags));
		
	}
	if ((pf->format)[pf->index] == 'd' || (pf->format)[pf->index] == 'i' || (pf->format)[pf->index] == 'D'
		|| (pf->format)[pf->index] == 'u')
	{

		num = ((pf->flags)->l_flag || (pf->flags)->ll_flag) ? va_arg(pf->ap, long) : va_arg(pf->ap, int);
		ft_putlong_pf(num, pf->flags);
		pf->res += numlen(num, 10);
		if ((pf->flags)->width > numlen(num, 10))
			pf->res += (pf->flags)->width - numlen(num, 10);
		/*
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			ft_putlong_pf(va_arg(pf->ap, long), pf->flags);
		else
			ft_putlong_pf(va_arg(pf->ap, int), pf->flags);
		*/
	}
	if ((pf->format)[pf->index] == 'f' || (pf->format)[pf->index] == 'F')
	{
		ft_bzero(temp, 40);
		precision = 6;
		if ((pf->flags)->dot_flag)
			precision = get_precision(pf);
		if ((pf->flags)->L_flag)
			double_to_str(va_arg(pf->ap, long double), temp, precision, pf->flags);
		else
			double_to_str(va_arg(pf->ap, double), temp, precision, pf->flags);
		ft_putstr_pf(temp, *(pf->flags));
		if ((pf->flags)->hash_flag && (precision == 0))
			ft_putchar('.');
		pf->res += ((pf->flags)->hash_flag && (precision == 0)) ? (ft_strlen(temp) + 1) : ft_strlen(temp);
	}
	if ((pf->format)[pf->index] == 'o' || (pf->format)[pf->index] == 'O')
	{
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_itoa_base_pf(va_arg(pf->ap, long), 8, *(pf->flags), 0);
		else
			s = ft_itoa_base_pf(va_arg(pf->ap, int), 8, *(pf->flags), 0);
		ft_putstr_pf(s, *(pf->flags));
		pf->res += ft_strlen(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'x')
	{
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_strlower(ft_itoa_base_pf(va_arg(pf->ap, long), 16, *(pf->flags), 0));
		else
			s = ft_strlower(ft_itoa_base_pf(va_arg(pf->ap, int), 16, *(pf->flags), 0));
		ft_putstr_pf(s, *(pf->flags));
		pf->res += ft_strlen(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'X')
	{
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_itoa_base_pf(va_arg(pf->ap, long), 16, *(pf->flags), 1);
		else
			s = ft_itoa_base_pf(va_arg(pf->ap, int), 16, *(pf->flags), 1);
		ft_putstr_pf(s, *(pf->flags));
		pf->res += ft_strlen(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'p')
	{
		s = pointer_to_str((unsigned long)(va_arg(pf->ap, void*)));
		ft_putstr_pf(s, *(pf->flags));
		pf->res += ft_strlen(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'b')
	{
		s = ft_itoa_base(va_arg(pf->ap, int), 2);
		ft_putstr(s);
		pf->res += ft_strlen(s);
		free(s);
	}
	if ((pf->format)[pf->index] == '%')
		ft_putchar('%');
}

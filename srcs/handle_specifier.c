/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:23:11 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/09 12:36:59 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

void	handle_specifier(t_pf *pf)
{
	char 	temp[20];
	char 	*s;
	int		precision;

	if ((pf->format)[pf->index] == 'c' || (pf->format)[pf->index] == 'C')
	{
		while ((pf->flags)->width > 1)
		{
			ft_putchar(' ');
			(pf->flags)->width--;
		}
		ft_putchar(va_arg(pf->ap, int));
	}
	if ((pf->format)[pf->index] == 's')
		ft_putstr_pf(va_arg(pf->ap, char*), pf->flags);
	if ((pf->format)[pf->index] == 'd' || (pf->format)[pf->index] == 'i' || (pf->format)[pf->index] == 'D'
		|| (pf->format)[pf->index] == 'u')
	{
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			ft_putlong_pf(va_arg(pf->ap, long), pf->flags);
		else
			ft_putnbr_pf(va_arg(pf->ap, int), pf->flags);
	}
	if ((pf->format)[pf->index] == 'f' || (pf->format)[pf->index] == 'F')
	{
		precision = 6;
		if ((pf->flags)->dot_flag)
			precision = get_precision(pf);
		if ((pf->flags)->L_flag)
			double_to_str(va_arg(pf->ap, long double), temp, precision, pf->flags);
		else
			double_to_str(va_arg(pf->ap, double), temp, precision, pf->flags);
		ft_putstr(temp);
		if ((pf->flags)->hash_flag && (precision == 0))
			ft_putchar('.');
	}
	if ((pf->format)[pf->index] == 'o' || (pf->format)[pf->index] == 'O')
	{
		//if ((pf->flags)->hash_flag)
		//	ft_putchar('0');

		//printf("width is %d\n", (pf->flags)->width);

		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_itoa_base_pf(va_arg(pf->ap, long), 8, *(pf->flags), 0);
		else
			s = ft_itoa_base_pf(va_arg(pf->ap, int), 8, *(pf->flags), 0);
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'x')
	{
		//if ((pf->flags)->hash_flag)
		//	ft_putstr("0x");	
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_strlower(ft_itoa_base_pf(va_arg(pf->ap, long), 16, *(pf->flags), 0));
		else
			s = ft_strlower(ft_itoa_base_pf(va_arg(pf->ap, int), 16, *(pf->flags), 0));
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'X')
	{
		//if ((pf->flags)->hash_flag)
		//	ft_putstr("0X");
		if ((pf->flags)->l_flag || (pf->flags)->ll_flag)
			s = ft_itoa_base_pf(va_arg(pf->ap, long), 16, *(pf->flags), 1);
		else
			s = ft_itoa_base_pf(va_arg(pf->ap, int), 16, *(pf->flags), 1);
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'p')
	{
		s = pointer_to_str((unsigned long)(va_arg(pf->ap, void*)));
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'b')
	{
		s = ft_itoa_base(va_arg(pf->ap, int), 2);
		ft_putstr(s);
		free(s);
	}
}

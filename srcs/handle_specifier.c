/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:23:11 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/26 12:06:10 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

void	handle_specifier(t_pf *pf)
{
	char temp[20];
	char *s;

	if ((pf->format)[pf->index] == 'c' || (pf->format)[pf->index] == 'C')
	   ft_putchar(va_arg(pf->ap, int));
	if ((pf->format)[pf->index] == 's')
		ft_putstr(va_arg(pf->ap, char*));
	if ((pf->format)[pf->index] == 'd' || (pf->format)[pf->index] == 'i' || (pf->format)[pf->index] == 'D')
		ft_putnbr(va_arg(pf->ap, int));
	if ((pf->format)[pf->index] == 'f' || (pf->format)[pf->index] == 'F')
	{
		double_to_str(va_arg(pf->ap, double), temp, 6);
		ft_putstr(temp);
	}
	if ((pf->format)[pf->index] == 'o' || (pf->format)[pf->index] == 'O')
	{
		s = ft_itoa_base(va_arg(pf->ap, int), 8);
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'x')
	{
		if ((pf->flags)->hash_flag)
			ft_putstr("0x");
		s = ft_strlower(ft_itoa_base(va_arg(pf->ap, int), 16));
		ft_putstr(s);
		free(s);
	}
	if ((pf->format)[pf->index] == 'X')
	{
		if ((pf->flags)->hash_flag)
			ft_putstr("0X");
		s = ft_itoa_base(va_arg(pf->ap, int), 16);
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
		//6 is the default precision of the real printf
		//TBA: handling for different precisions
}

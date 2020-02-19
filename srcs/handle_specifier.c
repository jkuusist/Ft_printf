/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:23:11 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/19 14:05:58 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

void	handle_specifier(t_struct *new)
{
	char temp[20];
	char *s;

	if ((new->format)[new->index] == 'c' || (new->format)[new->index] == 'C')
	   ft_putchar(va_arg(new->ap, int));
	if ((new->format)[new->index] == 's')
		ft_putstr(va_arg(new->ap, char*));
	if ((new->format)[new->index] == 'd' || (new->format)[new->index] == 'i' || (new->format)[new->index] == 'D')
		ft_putnbr(va_arg(new->ap, int));
	if ((new->format)[new->index] == 'f' || (new->format)[new->index] == 'F')
	{
		double_to_str(va_arg(new->ap, double), temp, 6);
		ft_putstr(temp);
	}
	if ((new->format)[new->index] == 'o' || (new->format)[new->index] == 'O')
	{
		s = ft_itoa_base(va_arg(new->ap, int), 8);
		ft_putstr(s);
		free(s);
	}
	if ((new->format)[new->index] == 'x')
	{
		s = ft_strlower(ft_itoa_base(va_arg(new->ap, int), 16));
		ft_putstr(s);
		free(s);
	}
	if ((new->format)[new->index] == 'X')
	{
		s = ft_itoa_base(va_arg(new->ap, int), 16);
		ft_putstr(s);
		free(s);
	}
	if ((new->format)[new->index] == 'p')
	{
		s = pointer_to_str((unsigned long)(va_arg(new->ap, void*)));
		ft_putstr(s);
		free(s);
	}
	if ((new->format)[new->index] == 'b')
	{
		s = ft_itoa_base(va_arg(new->ap, int), 2);
		ft_putstr(s);
		free(s);
	}

		
		//6 is the default precision of the real printf
		//TBA: handling for different precisions
}

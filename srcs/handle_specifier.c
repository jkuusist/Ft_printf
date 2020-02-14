/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:23:11 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/14 13:18:45 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

void	handle_specifier(t_struct *new)
{
	char temp[20];

	if ((new->format)[new->index] == 'c' || (new->format)[new->index] == 'C')
	   ft_putchar(va_arg(new->ap, char));
	if ((new->format)[new->index] == 's')
		ft_putstr(va_arg(new->ap, char*));
	if ((new->format)[new->index] == 'd' || (new->format)[new->index] == 'D')
		ft_putnbr(va_arg(new->ap, int));
	if ((new->format)[new->index] == 'f' || (new->format)[new->index] == 'F')
	{
		//printf("%f\n", va_arg(new->ap, double));
		double_to_str(va_arg(new->ap, double), temp, 6);
		ft_putstr(temp);
	}
		//6 is the default precision of the real printf
		//TBA: handling for different precisions
}

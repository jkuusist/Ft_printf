/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_to_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:20:21 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/11 10:55:05 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "../includes/ft_printf.h"

#include <stdio.h>

int		int_to_str(long num, char *str, int precision, int is_negative)
{
	int i;

	i = 0;
	while (num)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	while (i < precision)
	{
		str[i] = '0';
		i++;
	}
	if (is_negative)
	{
		str[i] = '-';
		i++;
	}
	ft_strrev(str, i);
	str[i] = '\0';
	return (i);
}

void	double_to_str(double dub, char *result, int precision, t_flags *flags)
{
	int		int_part;
	double	frac_part;
	int		i;

	int_part = (int)dub;
	frac_part = dub - (double)int_part;
	if (flags->space_flag && (dub >= 0))
		ft_putchar(' ');
	else if (flags->plus_flag && (dub >= 0))
		ft_putchar('+');
	if (dub < 0)
	{
		int_part *= -1;
		frac_part *= -1;
		i = int_to_str(int_part, result, 0, 1);
	}
	if (dub > 1.0)
		i = int_to_str(int_part, result, 0, 0);
	if ((dub < 1.0) && (dub >= 0.0))
	{
		result[0] = '0';
		i = 1;
	}
	if (precision != 0)
	{
		result[i] = '.';
		frac_part = frac_part * ft_pow(10, precision);
		result = result + i + 1;
		if ((long)(frac_part + 0.5))
			int_to_str((long)(frac_part + 0.5), result, precision, 0);
		else
			int_to_str((long)frac_part, result, precision, 0);
	}
}

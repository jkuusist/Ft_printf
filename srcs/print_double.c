/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:20:21 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/13 11:31:02 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

#include <stdio.h>

void	print_double(double dub, int precision)
{
	int int_part;
	double frac_part;
	
	int_part = (int)dub;
	frac_part = dub - (double)int_part;
	ft_putnbr(int_part);
	if (precision != 0)
	{
		ft_putchar('.');
		frac_part = (frac_part * ft_pow(10, precision));
		ft_putnbr((int)frac_part);
	}

}

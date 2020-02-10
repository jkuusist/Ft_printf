/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:20:21 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/10 15:57:05 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_double(double dub, int precision)
{
	int int_part;
	int frac_part;
	
	int_part = (int)dub;
	frac_part = dub - int_part;

	//ft_putnbr(int_part);

	if (frac_part != 0)
	{
		//ft_putchar('.');
		frac_part = (int)(frac_part * precision);
	}

	printf("int_part is %d\nfrac_part is %d\n", int_part, frac_part);	
}

int main()
{
	double dub = 7438.438219731;

	printf("frac_part should be %.12f\n", (dub - 7438));

	print_double(dub, 12);

	return 0;
}

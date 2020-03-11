/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_putters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 12:14:26 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/11 15:12:37 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"
#include "../includes/ft_printf.h"

#include <stdio.h>

void	ft_putlong_pf(long n, t_flags *flags)
{
	long i;
	long len;


//	printf("n is %ld\n", n);

	len = numlen(n, 10);
	if (flags->plus_flag && (n >= 0))
		ft_putchar('+');
	while ((flags->width > len) && !flags->minus_flag)
	{
		ft_putchar((flags->zero_flag) ? '0' : ' ');
		len++;
	}
	if (flags->space_flag && !flags->plus_flag && (n >= 0))
		ft_putchar(' ');
	if (n < 0)
	{
		i = -n;
		ft_putchar('-');
	}
	else
		i = n;
	if ((i / 10) > 0)
		ft_putlong(i / 10);
	ft_putchar((i % 10) + 48);
	if (flags->minus_flag)
	{
		while (flags->width > len)
		{

			ft_putchar(' ');
			len++;
		}
	}
}


/*
void	ft_putnbr_pf(int n, t_flags *flags)
{
	int i;
	int len;

	len = numlen(n, 10);
	if (flags->plus_flag && (n >= 0))
		ft_putchar('+');
	while (flags->width > len)
	{
		ft_putchar(' ');
		len++;
	}
	if (flags->space_flag && (n >= 0))
		ft_putchar(' ');
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		i = -n;
		ft_putchar('-');
	}
	else
		i = n;
	if ((i / 10) > 0)
		ft_putnbr(i / 10);
	ft_putchar((i % 10) + 48);
}
*/

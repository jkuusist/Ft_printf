/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:00:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/06/10 12:26:30 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

static long long	get_num(t_pf *pf)
{
	long long num;

	if (pf->spec_flag == 'D')
		num = (long)va_arg(pf->args, long);
	else if (pf->spec_flag == 'u')
		num = (unsigned int)va_arg(pf->args, unsigned int);
	else if (pf->mod_flag[2] == 'h')
		num = (short)va_arg(pf->args, int);
	else if (pf->mod_flag[0] == 'l')
		num = (long)va_arg(pf->args, long);
	else
		num = (int)va_arg(pf->args, int);
	return (num);
}

static void	handle_zeroes(t_pf *pf)
{
	if (pf->flags[3] == '+')
		ft_putchar('+');
	if (pf->flags[4] == ' ')
		ft_putchar(' ');
	fill_width(pf, ' ', pf->width, 1);
}

static void	check_flags(t_pf *pf, long long num, int len, int is_nega)
{
//	printf("is_nega is %d\n", is_nega);

	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
	{
		if ((pf->flags[3] == '+') && (is_nega == 0))
		{
			ft_putchar('+');
			pf->len++;
			len++;
		}
		fill_width(pf, '0', (pf->width - len), 1);
	}
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	if ((pf->flags[3] == '+') && (is_nega == 0) && (pf->flags[1] != '0'))
	{
		ft_putchar('+');
		pf->len++;
	}
	else if ((pf->flags[4] == ' ') && (num >= 0))
	{
		ft_putchar(' ');
		pf->len++;
	}
}

void			print_int(t_pf *pf)
{
	long long	num;
	int		len;
	int		is_nega;

	num = get_num(pf);
	is_nega = 0;
	if ((num == 0) && (pf->precision == 0))
	{
		handle_zeroes(pf);
		return ;
	}
	len = numlen(num, 10);
/*
	if ((pf->flags[1] == '0') && (pf->precision == -1) && (pf->flags[2] != '-'))
	{
		pf->precision = pf->width;
		if ((num < 0) || (pf->flags[2] == '-') || (pf->flags[3] == '+')
			|| (pf->flags[4] == ' '))
			(pf->precision)--;
	}
*/
	if (num < 0)
	{
		ft_putchar('-');
		pf->len++;
		num *= -1;
		is_nega = 1;
	}
	check_flags(pf, num, len, is_nega);
	ft_putlong(num);
	pf->len += numlen(num, 10);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
}

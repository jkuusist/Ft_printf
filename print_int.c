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

#include "includes/ft_printf.h"
#include "Libft/libft.h"

#include <stdio.h>

static long long	get_num(t_pf *pf)
{
	long long num;

	if (pf->spec_flag == 'D')
		num = (long)va_arg(pf->args, long);
	else if (pf->spec_flag == 'u')
	{
		if (pf->mod_flag[0] == 'l')
			num = (unsigned long)va_arg(pf->args, unsigned long);
		else if (pf->mod_flag[3] == 'l')
			num = (unsigned long long)va_arg(pf->args, unsigned long long);
		else
			num = (unsigned int)va_arg(pf->args, unsigned int);
	}
	else if (pf->mod_flag[2] == 'h')
		num = (short)va_arg(pf->args, int);
	else if (pf->mod_flag[4] == 'h')
		num = (signed char)va_arg(pf->args, int);
	else if (pf->mod_flag[0] == 'l')
		num = (long)va_arg(pf->args, long);
	else if (pf->mod_flag[3] == 'l')
		num = (long long)va_arg(pf->args, long long);
	else
		num = (int)va_arg(pf->args, int);
	return (num);
}

static void	handle_zeroes(t_pf *pf)
{
	if ((pf->flags[3] == '+') && (pf->spec_flag != 'u'))
		ft_putchar('+');
	if ((pf->flags[4] == ' ') && (pf->spec_flag != 'u'))
		ft_putchar(' ');
	fill_width(pf, ' ', pf->width, 1);
}

static void	check_flags(t_pf *pf, int len, int is_nega)
{
	int preci;
	int width;
	int to_fill;

	preci = pf->precision;
	width = pf->width;
	to_fill = (preci > len) ? preci : len;
	if (is_nega && (pf->flags[1] == '0'))
	{
		ft_putchar('-');
		to_fill++;
	}
	if ((pf->flags[3] == '+') && (is_nega == 0) && (pf->spec_flag != 'u'))
		to_fill++;
	if ((pf->flags[1] == '0') && (pf->flags[3] == '+') && (is_nega == 0)
		&& (pf->spec_flag != 'u'))
	{
		ft_putchar('+');
		pf->len++;
	}
	if (is_nega && (pf->flags[1] != '0') && (pf->flags[3] != '+')
		&& (pf->flags[4] != ' '))
	{
		width--;
		len++;
	}
	while ((pf->flags[2] != '-') && (to_fill < width))
	{
		((pf->flags[1] == '0') && (pf->precision == -1)) ? ft_putchar('0')
			: ft_putchar(' ');
		pf->len++;
		width--;
	}
	if ((pf->width == 0) && (pf->flags[3] != '+') && (pf->flags[4] == ' ')
		&& (is_nega == 0) && (pf->spec_flag != 'u'))
	{
		ft_putchar(' ');
		pf->len++;
	}
	if (is_nega && (pf->flags[1] != '0'))
	{
		ft_putchar('-');
		len--;
	}
	if ((pf->flags[1] != '0') && (pf->flags[3] == '+') && (is_nega == 0)
		&& (pf->spec_flag != 'u'))
	{
		ft_putchar('+');
		pf->len++;
	}
	while (preci > len)
	{
		ft_putchar('0');
		pf->len++;
		preci--;
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
	if (num < -9223372036854775807)
	{
		ft_putstr("-9223372036854775808");
		pf->len += 20;
		return ;
	}
	len = numlen(num, 10);
	if (num < 0)
	{
		is_nega = 1;
		len--;
		check_flags(pf, len, is_nega);
		pf->len++;
		num *= -1;
	}
	else
		check_flags(pf, len, is_nega);
	ft_putlong(num);
	pf->len += numlen(num, 10);
	if (pf->precision > len)
		len = pf->precision;
	if (pf->flags[2] == '-')
	{
		if ((pf->flags[3] == '+') || is_nega)
			len++;
		fill_width(pf, ' ', (pf->width - len), 1);
	}
}

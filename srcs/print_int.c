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

static long long	get_num(t_pf *pf)
{
	long long num;

	if (pf->spec_flag == 'D')
		num = (long)va_arg(pf->args, long);
	else if (pf->spec_flag == 'u')
		num = (unsigned int)va_arg(pf->args, unsigned int);
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
	if (pf->flags[3] == '+')
		ft_putchar('+');
	if (pf->flags[4] == ' ')
		ft_putchar(' ');
	fill_width(pf, ' ', pf->width, 1);
}

static void	check_flags(t_pf *pf, long long num, int len, int is_nega)
{
	int to_fill;

	to_fill = ((pf->precision > len) ? (pf->precision - len) : (pf->width - len));
	if (((pf->flags[1] == '0') && (pf->flags[2] != '-')) || pf->precision > len)
	{
		if ((pf->flags[3] == '+') && (is_nega == 0))
		{
			ft_putchar('+');
			pf->len++;
			len++;
		}
		fill_width(pf, '0', to_fill/*(pf->width - len)*/, 1);
	}
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', to_fill/*(pf->width - len)*/, 1);
	if ((pf->flags[3] == '+') && (is_nega == 0) && (pf->flags[1] != '0'))
	{
		ft_putchar('+');
		pf->len++;
	}
	else if ((pf->flags[3] != '+') && (pf->flags[4] == ' ') && (is_nega == 0))
	{
		ft_putchar(' ');
		pf->len++;
	}
}

void			print_int(t_pf *pf)
{
	long long	num;
	int		len;

	num = get_num(pf);
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
		check_flags(pf, num, len, 1);
		ft_putchar('-');
		pf->len++;
		num *= -1;
	}
	else
		check_flags(pf, num, len, 0);
	ft_putlong(num);
	pf->len += numlen(num, 10);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
}

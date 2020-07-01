/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_negative_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:00:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/06/30 12:26:30 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "Libft/libft.h"

static void		check_flags_nega(t_pf *pf, int len)
{
	int preci;
	int width;
	int to_fill;

	preci = pf->precision;
	width = pf->width;
	to_fill = (preci > len) ? preci : len;
	if (pf->flags[1] == '0')
	{
		ft_putchar('-');
		to_fill++;
	}
	if ((pf->flags[1] != '0') && (pf->flags[3] != '+')
		&& (pf->flags[4] != ' '))
	{
		width--;
		len++;
	}
	if (pf->flags[2] != '-')
		((pf->flags[1] == '0') && (pf->precision == -1))
		? fill_width(pf, '0', width - to_fill, 1)
		: fill_width(pf, ' ', width - to_fill, 1);
	if (pf->flags[1] != '0')
	{
		ft_putchar('-');
		len--;
	}
	if (preci > len)
		fill_width(pf, '0', preci - len, 1);
}

void			print_negative_int(t_pf *pf, long long num)
{
	int		len;

	if (num < -9223372036854775807)
	{
		ft_putstr("-9223372036854775808");
		pf->len += 20;
		return ;
	}
	len = numlen(num, 10);
	len--;
	check_flags_nega(pf, len);
	pf->len++;
	num *= -1;
	ft_putlong(num);
	pf->len += numlen(num, 10);
	if (pf->precision > len)
		len = pf->precision;
	if (pf->flags[2] == '-')
	{
		len++;
		fill_width(pf, ' ', (pf->width - len), 1);
	}
}

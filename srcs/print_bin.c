/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:00:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/06/10 12:26:30 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

unsigned long long	get_num(t_pf *pf)
{
	unsigned long long num;

	if (pf->mod_flag[2] == 'h')
		num = va_arg(pf->args, int);
	else if (pf->mod_flag[0] == 'l')
		num = (unsigned long)va_arg(pf->args, unsigned long);
	else
		num = (unsigned int)va_arg(pf->args, unsigned int);
	return (num);
}

void			print_bin(t_pf *pf)
{
	char			*s;
	unsigned long long	num;
	int			len;

	num = get_num(pf);
	if ((num == 0) && (pf->precision == 0) && (pf->flags[0] != '#'))
	{
		fill_width(pf, ' ', pf->width, 1);
		return ;
	}
	if (!(s = ft_itoa_base(num, 2)))
		exit(-1);
	if ((pf->flags[1] == '0') && (pf->precision == -1) && (pf->flags[2] != '-'))
		pf->precision = pf->width;
	len = numlen(num, 2);
	if (num && (pf->flags[0] == '#'))
		len++;
	pf->len += (pf->precision <= pf->width) ? pf->width : pf->precision;
	fill_width(pf, '0', (pf->precision - len), 0);
	ft_putstr(s);
	pf->len += ft_strlen(s);
	free(s);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - pf->precision), 0);
}

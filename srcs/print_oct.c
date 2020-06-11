/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oct.c                                        :+:      :+:    :+:   */
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

static unsigned long long	get_num(t_pf *pf)
{
	unsigned long long num;

	if (pf->spec_flag == 'O')
		num = (unsigned long)va_arg(pf->args, unsigned long);
        else if (pf->mod_flag[2] == 'h')
                num = (unsigned short)va_arg(pf->args, unsigned int);
        else if (pf->mod_flag[0] == 'l')
                num = (unsigned long)va_arg(pf->args, unsigned long);
        else
		num = (unsigned int)va_arg(pf->args, unsigned int);
	return (num);	
}

void				print_oct(t_pf *pf)
{
	char			*s;
	unsigned long long	num;
	int			len;

/*
	if (pf->spec_flag == 'O')
		num = (unsigned long)va_arg(pf->args, unsigned long);
        else if (pf->mod_flag[2] == 'h')
                num = (unsigned short)va_arg(pf->args, unsigned int);
        else if (pf->mod_flag[0] == 'l')
                num = (unsigned long)va_arg(pf->args, unsigned long);
        else
		num = (unsigned int)va_arg(pf->args, unsigned int);
*/
	num = get_num(pf);
	if ((num == 0) && (pf->precision == 0) && (pf->flags[0] != '#'))
	{
		fill_width(pf, ' ', pf->width, 1);
		return ;
	}
	if (!(s = ft_itoa_base(num, 8)))
		exit(-1);
	(pf->flags[0] == '#') ? (len = ft_strlen(s) + 1) : (len = ft_strlen(s));
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - len), 1);
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	if (pf->flags[4] == ' ')
		ft_putchar(' ');
	if (num && (pf->flags[0] == '#'))
		ft_putchar('0');
	ft_putstr(s);
	pf->len += ft_strlen(s);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	pf->len += (pf->precision <= pf->width) ? pf->width : pf->precision;	
	free(s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 11:17:22 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/11 15:20:17 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../Libft/libft.h"
#include "../includes/ft_printf.h"

#include <stdio.h>

void	ft_putstr_pf(char const *s, t_flags flags)
{
	int width = flags.width;
	int len;

	if (!s)
		return ;
	len = ft_strlen(s);

//	printf("width is %d\nlen is %d\n", flags.width, len);

	while ((width > len) && !flags.minus_flag)
	{
		ft_putchar((flags.zero_flag) ? '0' : ' ');
		width--;
	}
	write(1, s, len);
	if (flags.minus_flag)
		while (width > len)
		{
			ft_putchar(' ');
			width--;
		}
}

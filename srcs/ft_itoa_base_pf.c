/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:07:27 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/06 13:35:24 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../Libft/libft.h"
#include "../includes/ft_printf.h"

#include <stdio.h>

char	*ft_itoa_base_pf(long num, int base, t_flags flags, int is_capital)
{
	char	*s;
	long	n;
	long	i;
	int len;

	n = num;
	if (base == 8)
		i = (flags.hash_flag) ? 2 : 1;
	else if (base == 16)
		i = (flags.hash_flag) ? 3 : 1;
	else
		i = 1;
	while ((n /= base) >= 1)
		i++;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	n = num;
	while (i--)
	{
		s[i] = (n % base < 10) ? (n % base + '0') : (n % base + 'A' - 10);
		n /= base;
	}
	if (flags.hash_flag && (base == 8))
		s[--i] = '0';
	else if (flags.hash_flag && (base == 16))
	{
		s[1] = (is_capital) ? 'X' : 'x';
		s[0] = '0';
		//s[--i] = (is_capital) ? 'X' : 'x';
		//s[--i] = '0';
	}
	len = ft_strlen(s);

//printf("width is %d\nlen is %d\n", flags.width, len);
					
	while ((flags.width) > len)
	{
		//printf("len is %d\n", len);
		ft_putchar(' ');
		len++;
	}
	return (s);
}

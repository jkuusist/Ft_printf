/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:20:07 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/17 13:07:10 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa_base(int num, int base)
{
	char	*s;
	int		n;
	int		i;

	n = num;
	i = 1;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	n = num;
	while (i--)
	{
		s[i] = (n % base < 10) ? (n % base + '0') : (n % base + 'A' - 10);
		n /= base;
	}
	return (s);
}

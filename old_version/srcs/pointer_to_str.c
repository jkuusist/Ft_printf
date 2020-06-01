/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 13:39:39 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/19 14:03:58 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*pointer_to_str(unsigned long pointer)
{
	char			*s;
	unsigned long	n;
	int				i;

	n = pointer;
	i = 1;
	while ((n /= 16) >= 1)
		i++;
	i += 1;
	if (!(s = (char*)malloc(sizeof(char) * (i + 3))))
		return (NULL);
	s[i] = '\0';
	n = pointer;
	while (n)
	{
		s[i] = (n % 16 < 10) ? (n % 16 + '0') : (n % 16 + 'a' - 10);
		n /= 16;
		i--;
	}
	s[i] = 'x';
	i--;
	s[i] = '0';
	i--;
	return (s);
}

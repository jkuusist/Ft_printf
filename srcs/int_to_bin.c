/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 14:42:45 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/17 11:31:20 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "../Libft/libft.h"

void	int_to_bin(int x, char *result)
{
	int i;
	int j;

	i = 31;
	while (i >= 0)
	{
		j = (x >> i);
		ft_strcat(result, ((j & 1) ? "1" : "0"));
		i--;
	}
	result[33] = '\0';
}

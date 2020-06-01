/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:13:24 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/10 11:32:09 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

int		get_precision(t_pf *pf)
{
	int res;
	int end_index;
	int start_index;
	char *temp;

	res = 0;
	end_index = pf->index; /*- 1;*/
	start_index = pf->index;
	while ((pf->format)[start_index - 1] != '.')
		start_index--;
	temp = ft_strsub(pf->format, start_index, (end_index - start_index));
	res = ft_atoi(temp);
	free(temp);
	return (res);
}

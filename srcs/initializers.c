/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:13:39 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/26 11:14:06 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_pf	*initialize_pf(t_pf *pf)
{
	pf->res = 0;
	pf->index = 0;
	pf->spec_mask = "cCsdiDfFoOxXpb";
	return (pf);
}

t_flags	*initialize_flags(t_flags flags)
{
	flags->h_flag = 0;
	flags->hh_flag = 0;
	flags->l_flag = 0;
	flags->ll_flag = 0;
	flags->hash_flag = 0;
	flags->zero_flag = 0;
	flags->minus_flag = 0;
	flags->plus_flag = 0;
	return (flags);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:13:39 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/04 14:03:36 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdlib.h>

t_flags	*initialize_flags(t_flags *flags)
{
	flags->h_flag = 0;
	flags->hh_flag = 0;
	flags->l_flag = 0;
	flags->ll_flag = 0;
	flags->hash_flag = 0;
	flags->zero_flag = 0;
	flags->minus_flag = 0;
	flags->plus_flag = 0;
	flags->space_flag = 0;
	return (flags);
}

t_pf	*initialize_pf(t_pf *pf)
{
	pf->res = 0;
	pf->index = 0;
	pf->spec_mask = "cCsdiDufFoOxXpb";
	pf->flag_mask = "#0-+ L.";
	pf->flags = (t_flags*)malloc(sizeof(t_flags));
	pf->flags = initialize_flags(pf->flags);
	return (pf);
}

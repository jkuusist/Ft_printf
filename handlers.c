/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 12:00:00 by jkuusist          #+#    #+#             */
/*   Updated: 2020/06/10 12:26:30 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "Libft/libft.h"

#include <stdio.h>

void	handle_flags(t_pf *pf)
{
	int i;

	i = 0;
	while (pf->flag_mask[i])
	{
		while (pf->flag_mask[i] == pf->format[pf->i])
		{
			while ((pf->format[pf->i] == '#') && pf->i++)
				pf->flags[0] = '#';
			while ((pf->format[pf->i] == '0') && pf->i++)
				pf->flags[1] = '0';
			while ((pf->format[pf->i] == '-') && pf->i++)
				pf->flags[2] = '-';
			while ((pf->format[pf->i] == '+') && pf->i++)
				pf->flags[3] = '+';
			while ((pf->format[pf->i] == ' ') && pf->i++)
				pf->flags[4] = ' ';
			i = 0;
		}
		i++;
	}
	pf->flags[5] = '\0';
}

void	handle_width(t_pf *pf)
{
	while ((pf->format[pf->i] >= '0') && (pf->format[pf->i] <= '9'))
	{
		pf->width *= 10;
		pf->width += (pf->format[pf->i] - '0');
		(pf->i)++;
	}
}

void	handle_precision(t_pf *pf)
{
	while (pf->format[pf->i] == '.')
	{
		(pf->i)++;
		pf->precision = 0;
	}
	while ((pf->format[pf->i] >= '0') && (pf->format[pf->i] <= '9'))
	{
		pf->precision *= 10;
		pf->precision += (pf->format[pf->i] - '0');
		(pf->i)++;
	}
}

void	handle_modifiers(t_pf *pf)
{
//	int i;
	int l_is_found;
	int h_is_found;

//	i = 0;
	l_is_found = 0;
	h_is_found = 0;
		while (ft_strchr(pf->mod_mask, pf->format[pf->i]))
		{
			if ((pf->format[pf->i] == 'l') && (l_is_found == 0) && pf->i++)
			{
				pf->mod_flag[0] = 'l';
				l_is_found = 1;
			}
			else if ((l_is_found == 1) && pf->i++)
			{
				pf->mod_flag[0] = '\0';
				pf->mod_flag[3] = 'l';	
			}
			while ((pf->format[pf->i] == 'L') && pf->i++)
				pf->mod_flag[1] = 'L';
			if ((pf->format[pf->i] == 'h') && (h_is_found == 0) && pf->i++)
			{
				pf->mod_flag[2] = 'h';
				h_is_found = 1;
			}
			else if ((h_is_found == 1) && pf->i++)
			{
				pf->mod_flag[2] = '\0';
				pf->mod_flag[4] = 'h';
			}
						
		}
}

void	handle_specifier(t_pf *pf)
{
	int i;

	i = 0;
	while (pf->spec_mask[i] != '\0')
	{
		if (pf->spec_mask[i] == pf->format[pf->i])
			pf->spec_flag = pf->spec_mask[i];
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:21:54 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/11 14:51:32 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

void	handle_hl(t_pf *pf)
{
	if (pf->formatcpy[pf->index] == 'h')
	{
		if (pf->formatcpy[pf->index + 1] == 'h')
		{
			(pf->flags)->hh_flag = 1;
			pf->index += 2;
		}
		else
		{
			(pf->flags)->h_flag = 1;
			pf->index++;
		}
	}
	else if (pf->formatcpy[pf->index] == 'l')
	{
		if (pf->formatcpy[pf->index + 1] == 'l')
		{
			(pf->flags)->ll_flag = 1;
			pf->index += 2;
		}
		else
		{
			(pf->flags)->l_flag = 1;
			pf->index++;
		}
	}
}

int		ft_printf(const char *format, ...)
{
	t_pf *pf;

	if (!(pf = (t_pf*)malloc(sizeof(t_pf))))
		return (-1);
	pf->format = format;
	pf->formatcpy = (char*)pf->format;
	if (format)
	{
		va_start(pf->ap, format);
		pf = initialize_pf(pf);
		while (pf->formatcpy[pf->index] != '\0')
		{
//			printf("index is %d\n", pf->index);

			if  (pf->formatcpy[pf->index] == '%')
			{
				pf->index++;

				/*
				if (ft_isdigit(pf->formatcpy[pf->index]))
				{
					(pf->flags)->width = ft_atoi(&(pf->formatcpy[pf->index]));
					while (ft_isdigit(pf->formatcpy[pf->index]))
						pf->index++;
				}
				*/
				while ((!ft_strchr(pf->spec_mask, pf->formatcpy[pf->index])) && (!ft_isdigit(pf->formatcpy[pf->index])))
				{

//					printf("got into inner while loop");
//				printf("index is %d\n", pf->index);

					if (pf->formatcpy[pf->index] == 'h')
					{
						if (pf->formatcpy[pf->index + 1] == 'h')
						{
							(pf->flags)->hh_flag = 1;
							pf->index += 2;
						}
						else
						{
							(pf->flags)->h_flag = 1;
							pf->index++;
						}
					}
					else if (pf->formatcpy[pf->index] == 'l')
					{
						if (pf->formatcpy[pf->index + 1] == 'l')
						{
							(pf->flags)->ll_flag = 1;
							pf->index += 2;
						}
						else
						{
							(pf->flags)->l_flag = 1;
							pf->index++;
						}

//						printf("l_flag is now %d\n", (pf->flags)->l_flag);

					}
					
					else if (ft_strchr(pf->flag_mask, pf->formatcpy[pf->index]))
					{
						toggle_flag(pf->flags, pf->formatcpy[pf->index]);
						pf->index++;
						if (pf->formatcpy[pf->index - 1] == '.')
							while (pf->formatcpy[pf->index] != 'f')
								pf->index++;
					}
					//pf->index++;
					}
				if (ft_isdigit(pf->formatcpy[pf->index]))
				{
					if (pf->formatcpy[pf->index] == '0')
					{
						(pf->flags)->zero_flag = 1;
						pf->index++;
					}
					(pf->flags)->width = ft_atoi(&(pf->formatcpy[pf->index]));
					
//					printf("width is %d\n", pf->flags->width);

					while (ft_isdigit(pf->formatcpy[pf->index]))
					{
						pf->index++;
						handle_hl(pf);
					}
				}
				
				if (ft_strchr(pf->spec_mask, pf->formatcpy[pf->index]))
				{
					handle_specifier(pf);
				}
			}
			else
				ft_putchar(pf->formatcpy[pf->index]);
			pf->index++;
		}
		va_end(pf->ap);
	}
	free(pf->flags);
	free(pf);
	return (pf->res);
	//These functions return the number of characters printed (not including the trailing `\0')
	//These functions return a negative value if an error occurs.
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:21:54 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/07 12:31:24 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdarg.h>
#include <stdlib.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

int		ft_printf(const char *format, ...)
{
	//printf("ft_printf's format is: %s\n", format);

	t_struct *thingy;

	if (!(thingy = (t_struct*)malloc(sizeof(t_struct))))
		return (-1);
	thingy->format = format;	
	thingy->formatcpy = (char*)thingy->format;
	if (format)
	{
		va_start(thingy->ap, format);
		thingy = initializer(thingy);

		//printf("thingy->format is    %s\n", thingy->format);
		//printf("thingy->formatcpy is %s\n", thingy->formatcpy);

		while (thingy->formatcpy[thingy->index] != '\0')
		{
			if (thingy->formatcpy[thingy->index] == '%')
			{
				thingy->index++;
				handle_specifier(thingy);
			}
			else
				ft_putchar(thingy->formatcpy[thingy->index]);
			thingy->index++;

			//printf("index is now %d\n", thingy->index);
		
		}
		va_end(thingy->ap);
	}
	free(thingy);
	return (thingy->res);
	//These functions return the number of characters printed (not including the trailing `\0')
	//These functions return a negative value if an error occurs.
}

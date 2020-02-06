/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:21:54 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/06 12:21:20 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *format, ...)
{
	t_struct *new;

	if !(new = (t_struct*)malloc(sizeof(t_struct)))
		return (-1);
	if (format)
	{
		new->format = format;
		va_start(new->ap, format);

		//do the actual printf-ing here

		va_end(new-ap);	
	}
	
	va_end(arg);
	free(new);
	return (new->res);
	//These functions return the number of characters printed (not including the trailing `\0')
	//These functions return a negative value if an error occurs.
}

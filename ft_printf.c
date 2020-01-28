/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:21:54 by jkuusist          #+#    #+#             */
/*   Updated: 2020/01/28 16:37:40 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int		printf(const char *format, ...)
{
	va_list ap;
	int		num_args;

	//get num_args here

	va_start(ap, num_args);

	//These functions return the number of characters printed (not including the trailing `\0')
	//These functions return a negative value if an error occurs.
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:21:54 by jkuusist          #+#    #+#             */
/*   Updated: 2020/01/29 12:34:43 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void	handle_specifier(char *str)
{

}

int		printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	formatcpy = format;
	while (*format != '\0')
	{
		while (*format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		format++;
		handle_specifier(*format);
	}
	
	va_end(arg);
	//These functions return the number of characters printed (not including the trailing `\0')
	//These functions return a negative value if an error occurs.
}

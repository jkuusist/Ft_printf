/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:13:36 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/13 13:32:42 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct	s_struct
{
	const char	*format;
	char		*formatcpy;
	va_list		ap;
	int			res;
	int			index;
}				t_struct;

int				ft_printf(const char *format, ...);
void			handle_specifier(t_struct *new);
t_struct		*initializer(t_struct *new);
void			double_to_str(float dub, char *result, int precision);

#endif

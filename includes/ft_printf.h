/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:13:36 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/20 11:32:17 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct	s_pf
{
	const char	*format;
	char		*formatcpy;
	va_list		ap;
	int			res;
	int			index;
}				t_pf;

int				ft_printf(const char *format, ...);
void			handle_specifier(t_pf *pf);
t_pf			*initializer(t_pf *pf);
void			double_to_str(double dub, char *result, int precision);
char			*pointer_to_str(unsigned long pointer);

#endif

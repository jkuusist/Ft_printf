/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:13:36 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/21 11:32:42 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

typedef struct	s_flags
{
	int			h_flag;
	int			hh_flag;
	int			l_flag;
	int			ll_flag;
	int			hash_flag;
	int			zero_flag;
	int			minus_flag;
	int			plus_flag;
}				t_flags;

typedef struct	s_pf
{
	const char	*format;
	char		*formatcpy;
	va_list		ap;
	int			res;
	int			index;
	char		*spec_mask;
}				t_pf;

int				ft_printf(const char *format, ...);
void			handle_specifier(t_pf *pf);
t_pf			*initializer(t_pf *pf);
void			double_to_str(double dub, char *result, int precision);
char			*pointer_to_str(unsigned long pointer);
t_pf			*check_flag(t_pf *pf, char c);

#endif

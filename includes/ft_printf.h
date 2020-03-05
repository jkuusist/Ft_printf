/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:13:36 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/05 12:40:00 by jkuusist         ###   ########.fr       */
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
	int			space_flag;
	int			L_flag;
	int			dot_flag;
}				t_flags;

typedef struct	s_pf
{
	const char	*format;
	char		*formatcpy;
	va_list		ap;
	int			res;
	int			index;
	char		*spec_mask;
	char		*flag_mask;
	t_flags		*flags;
}				t_pf;

int				ft_printf(const char *format, ...);
void			handle_specifier(t_pf *pf);
t_flags			*initialize_flags(t_flags *flags);
t_pf			*initialize_pf(t_pf *pf);
void			double_to_str(double dub, char *result, int precision, t_flags *flags);
char			*pointer_to_str(unsigned long pointer);
t_flags			*toggle_flag(t_flags *flags, char c);
int				get_precision(t_pf *pf);
void			ft_putlong_pf(long n, t_flags *flags);
void			ft_putnbr_pf(int n, t_flags *flags);

#endif

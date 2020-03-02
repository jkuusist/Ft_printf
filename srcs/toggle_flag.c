/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:02:14 by jkuusist          #+#    #+#             */
/*   Updated: 2020/03/02 12:20:39 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

t_flags	*toggle_flag(t_flags *flags, char c)
{
	if (c == '#')
		flags->hash_flag = 1;
	if (c == '0')
		flags->zero_flag = 1;
	if (c == '-')
		flags->minus_flag = 1;
	if (c == '+')
		flags->plus_flag = 1;
	if (c == ' ')
		flags->space_flag = 1;
	return (flags);
}

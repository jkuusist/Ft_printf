/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:20:21 by jkuusist          #+#    #+#             */
/*   Updated: 2020/02/14 11:29:37 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int		int_to_str(int num, char *str, int precision)
{
	int i;

	i = 0;
	while (num)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	while (i < precision)
	{
		str[i] = '0';
		i++;
	}
	ft_strrev(str, i);
	str[i] = '\0';
	return (i);
}

void	double_to_str(double dub, char *result, int precision)
{
	int		int_part;
	double	frac_part;
	int		i;

	int_part = (int)dub;
	frac_part = dub - (double)int_part;
	
	if (dub < 0)
	{
		*result = '-';
		result++;
		int_part *= -1;
		frac_part *= -1;
	}

	i = int_to_str(int_part, result, 0);

	//printf("i is now %d\n", i);
	//printf("frac_part is now %lf\n", frac_part);
	//ft_putnbr(int_part);

	if (precision != 0)
	{
		//ft_putchar('.');

		result[i] = '.';
		frac_part = frac_part * ft_pow(10, precision);

		//printf("result is: %s\nresult + i is: %s\n", result, result + i);

		result = result + i + 1;
		int_to_str((int)frac_part, result, precision);

		printf("frac_part is now %lf\n", frac_part);

		//ft_putnbr((int)frac_part);
	}


}

int main()
{
	//double doo = -1.61803398;
	//char *s = (char*)malloc(sizeof(char) * 20);
	char string[20];
	double doo = -233.107;

	//printf("printf: %lf\n", doo);

	double_to_str(doo, string, 6);

	printf("%s\n", string);

	//free(s);

	return (0);
}

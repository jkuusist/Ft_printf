#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

void	print_double(t_pf *pf)
{
	long double	dub;
	char		*s;
	//int		int_part;
	//double		frac_part;
	//int		len;

	//MIGHT CAUSE PROBLEMS, CHECK BEFORE TURNING IN
	if (!(s = (char*)malloc(sizeof(char) * 25)))
		exit(-1);

//	printf("s is now: %p\n", s);

	if (pf->mod_flag[1] == 'L')
		dub = (long double)va_arg(pf->args, long double);
	else
		dub = (double)va_arg(pf->args, double);
	if (pf->precision == -1)
		pf->precision = 6;
	double_to_str(dub, s, pf->precision, pf->flags);

//	printf("s is now: %p\n", s);

	ft_putstr(s);
	free(s);

/*
	int_part = (int)dub;
	frac_part = dub - (double)int_part;
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - pf->precision), 
*/	
}

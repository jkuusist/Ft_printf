#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

void	print_double(t_pf *pf)
{
	long double	dub;
	char		*s;
	//int		int_part;
	//double		frac_part;
	//int		len;

	//MIGHT CAUSE PROBLEMS, CHECK BEFORE TURNING IN
	s = NULL;

	if (ft_strchr(pf->mod_flag, 'L'))
		dub = (long double)va_arg(pf->args, long double);
	else
		dub = (double)va_arg(pf->args, double);
	double_to_str(dub, s, pf->precision, pf->flags);
	ft_putstr(s);
/*
	int_part = (int)dub;
	frac_part = dub - (double)int_part;
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - pf->precision), 
*/	
}

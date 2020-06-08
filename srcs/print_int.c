#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

void	print_int(t_pf *pf)
{
	long long	num;
	int		len;

	if (pf->spec_flag == 'D')
		num = (long)va_arg(pf->args, long);
	else if (pf->spec_flag == 'u')
		num = (unsigned int)va_arg(pf->args, unsigned int);
//	else if (ft_strcmp(pf->mod_flag, "hh") == 0)
//		num = (signed char)va_arg(pf->args, int);
	else if (pf->mod_flag[2] == 'h')
		num = (short)va_arg(pf->args, int);
//	else if (ft_strcmp(pf->mod_flag, "ll") == 0)
//		num = (long long)va_arg(pf->args, long long);
	else if (pf->mod_flag[0] == 'l')
		num = (long)va_arg(pf->args, long);
	else
		num = (int)va_arg(pf->args, int);
	if ((num == 0) && (pf->precision == 0))
	{
		if (pf->flags[3] == '+')
			ft_putchar('+');
		if (pf->flags[4] == ' ')
			ft_putchar(' ');
		fill_width(pf, ' ', pf->width, 1);
		return ;	
	}
	len = numlen(num, 10);
	if ((pf->flags[1] == '0') && (pf->precision == -1) && (pf->flags[2] != '-'))
	{
		pf->precision = pf->width;
		if ((num < 0) || (pf->flags[2] == '-') || (pf->flags[3] == '+') || (pf->flags[4] == ' '))
			(pf->precision)--;
	}

	//MAY NOT GIVE CORRECT PF->LEN, CHECK BEFORE TURNING IN
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - len), 1);
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	if ((pf->flags[4] == ' ') && (num >= 0))
		ft_putchar(' ');
	ft_putlong(num);
	pf->len += numlen(num, 10);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	pf->len += (pf->precision <= pf->width) ? pf->width : pf->precision;
}

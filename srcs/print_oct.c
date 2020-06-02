#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

void	print_oct(t_pf *pf)
{
	char			*s;
	unsigned long long	num;
	int			len;

	if (pf->spec_flag == 'O')
		num = (unsigned long)va_arg(pf->args, unsigned long);
//	else if (ft_strcmp(pf->mod_flag, "hh") == 0)
//              num = (unsigned char)va_arg(pf->args, unsigned int);
        else if (pf->mod_flag[2] == 'h')
                num = (unsigned short)va_arg(pf->args, unsigned int);
//      else if (ft_strcmp(pf->mod_flag, "ll") == 0)
//              num = (unsigned long long)va_arg(pf->args, unsigned long long);
        else if (pf->mod_flag[0] == 'l')
                num = (unsigned long)va_arg(pf->args, unsigned long);
        else
		num = (unsigned int)va_arg(pf->args, unsigned int);
	if ((num == 0) && (pf->precision == 0) && (pf->flags[0] != '#'))
	{
		fill_width(pf, ' ', pf->width, 1);
		return ;
	}
	if (!(s = ft_itoa_base_pf(num, 8, pf->flags, 0)))
		exit(-1);
	if ((pf->flags[1] == '0') && (pf->precision == -1) && (pf->flags[2] != '-'))
		pf->precision = pf->width;
	len = numlen(num, 8);
	if (num && (pf->flags[0] == '#'))
		len++;
	pf->len += (pf->precision <= pf->width) ? pf->width : pf->precision;
	if (num && (pf->flags[0] == '#'))
		ft_putchar('0');
	fill_width(pf, '0', (pf->precision - len), 0);
	ft_putstr(s);
	free(s);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - pf->precision), 0);
}

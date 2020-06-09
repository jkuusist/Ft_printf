#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

void	print_ptr(t_pf *pf)
{
	char		*s;
	unsigned long	num;
	int		len;

	num = (unsigned long)va_arg(pf->args, unsigned long);
	if (!(s = ft_itoa_base_pf(num, 16, pf->flags, 0)))
		exit (-1);
/*	if ((num == 0) && (pf->precision == 0))
		*s = '\0';
	if ((pf->flags[1] == '0') && (pf->precision == -1) && (pf->flags[2] != '-'))
	{
		pf->precision = pf->width - 2;
		pf->width = 0;
	}
	len = ft_strlen(s) + 2;
	pf->len += (len <= pf->width) ? (pf->width) : (len);
	if (!(pf->flags[2] != '-'))
		fill_width(pf, ' ', (pf->width - len + 2), 1);
	ft_putstr("0x");
	fill_width(pf, '0', (pf->precision - len + 2), 1);
	ft_strlower(s);
	ft_putstr(s);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 0);
	free(s);
*/
	len = ft_strlen(s) + 2;
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - len), 1);
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	if ((pf->flags[4] == ' ') /*&& (num >= 0)*/)
		ft_putchar(' ');
	if (num && (pf->flags[0] == '#'))
		(pf->spec_flag == 'x') ? (ft_putstr("0x")) : (ft_putstr("0X"));
	ft_putstr("0x");
	ft_putstr(ft_strlower(s));
	pf->len += (ft_strlen(s) + 2);
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	pf->len += (pf->precision <= pf->width) ? pf->width : pf->precision;
	free(s);
}

#include "ft_printf.h"
#include "libft.h"

void	print_percent(t_pf *pf)
{
	if ((pf->flags[1] == '0') && (pf->precision <= 0) && (pf->flags[2] != '-'))
	{
		pf->precision = pf->width;
		pf->width = 0;
	}
	if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - 1), 1);
	if (pf->flags[1] == 0)
		fill_width(pf, '0', (pf->precision - 1), 1);
	ft_putchar('%');
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - 1), 1);
	pf->len++;
}

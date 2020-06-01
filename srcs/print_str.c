#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

void	print_str(t_pf *pf)
{
	char	*s;
	int	len;

	s = va_arg(pf->args, char*);
	if (s && (pf->precision > -1))
		s = ft_strndup(s, pf->precision);
	else if (!s && (pf->precision > -1))
		s = ft_strndup("null", pf->precision);
	else if (!s && (pf->precision == -1))
		s = ft_strdup("null");
	len = ft_strlen(s);
	pf->len += len;
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - len), 1);
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	ft_putstr(s);

	//MAY NEED TO HANDLE LEFT JUSTIFICATION WITH ZEROES, CHECK BEFORE TURNING IN
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - len), 1);
	free(s);
}

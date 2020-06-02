#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <ctype.h>

void	print_char(t_pf *pf)
{
//	wint_t c;
	char c;

	if ((pf->mod_flag[0] == 'l') || (pf->spec_flag == 'C'))
		c = va_arg(pf->args, int); /*wint_t);*/
	else
		c = va_arg(pf->args, int);
	if ((pf->flags[1] == '0') && (pf->flags[2] != '-'))
		fill_width(pf, '0', (pf->width - 1), 1);
	else if (pf->flags[2] != '-')
		fill_width(pf, ' ', (pf->width - 1), 1);

	//IF THERE'S TIME, CONSIDER ADDING PROPER HANDLING FOR WCHARS

	ft_putchar(c);
	
	//MAY NEED TO HANDLE LEFT JUSTIFICATION WITH ZEROES, CHECK BEFORE TURNING IN
	if (pf->flags[2] == '-')
		fill_width(pf, ' ', (pf->width - 1), 1);
}

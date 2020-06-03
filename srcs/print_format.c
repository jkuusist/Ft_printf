#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <stdio.h>

void	print_format(t_pf *pf)
{

//	printf("spec_flag is %c\n", pf->spec_flag);

	if ((pf->spec_flag == 'c') || (pf->spec_flag == 'C'))
		print_char(pf);
	//else if (((pf->spec_flag == 's') && ft_strchr(pf->mod_flag, 'l')) || pf->spec_flag == 'S')
		//print_wstr(pf);
	else if (pf->spec_flag == 's')
		print_str(pf);
	else if ((pf->spec_flag == 'd') || (pf->spec_flag == 'i') || (pf->spec_flag == 'D') || (pf->spec_flag == 'u'))
		print_int(pf);
	else if ((pf->spec_flag == 'f') || (pf->spec_flag == 'F'))
		print_double(pf);
	else if ((pf->spec_flag == 'o') || (pf->spec_flag == 'O'))
		print_oct(pf);
	else if ((pf->spec_flag == 'x') || (pf->spec_flag == 'X'))
		print_hex(pf);
	else if (pf->spec_flag == 'p')
		print_ptr(pf);
	else if (pf->spec_flag == 'b')
		print_bin(pf);
	else if (pf->spec_flag == '%')
		print_percent(pf);
}

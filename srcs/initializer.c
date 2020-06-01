#include "../includes/ft_printf.h"

void	initializer(t_pf *pf)
{
	pf->i = 0;
	pf->len = 0;
	pf->precision = -1;
	pf->width = 0;
	pf->spec_mask = "cCsSdiDufFoOxXpb%";
	pf->flag_mask = "#0-+ ";
	pf->mod_mask = "lLh";
}

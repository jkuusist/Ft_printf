#include "../includes/ft_printf.h"

void	initializer(t_pf *pf)
{
	pf->i = 0;
	pf->len = 0;
	pf->precision = -1;
	pf->width = 0;
	pf->spec_mask = "cCsSdiDufFoOxXpb%";
	pf->flag_mask = "#0-+ ";
	//if !(pf->mod_mask = (char*)malloc(sizeof(char) * 4))
	//	exit(-1);
	pf->mod_mask = "lLh";
}

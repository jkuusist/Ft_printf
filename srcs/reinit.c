#include "../includes/ft_printf.h"

void	reinit(t_pf *pf)
{
	int i;

	i = 0;
	pf->precision = -1;
	pf->width = 0;
	while (i < 6)
	{
		pf->flags[i] = '\0';
		i++;
	}
	pf->spec_flag = '\0';
	i = 0;
	//THIS MIGHT CAUSE ISSUES, DOUBLE CHECK BEFORE TURNING IN
	while (i < 3)
	{
		pf->mod_flag[i] = '\0';
		i++;
	}
}

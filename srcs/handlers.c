#include "../includes/ft_printf.h"

void	handle_flags(t_pf *pf)
{
	int i;

	i = 0;
	while (pf->flag_mask[i])
	{
		while (pf->flag_mask[i] == pf->format[pf->i])
		{
			while ((pf->format[pf->i] == '#') && pf->i++)
				pf->flags[0] = '#';
			while ((pf->format[pf->i] == '0') && pf->i++)
				pf->flags[1] = '0';
			while ((pf->format[pf->i] == '-') && pf->i++)
				pf->flags[2] = '-';
			while ((pf->format[pf->i] == '+') && pf->i++)
				pf->flags[3] = '+';
			while ((pf->format[pf->i] == ' ') && pf->i++)
				pf->flags[4] = ' ';
			i = 0;
		}
		i++;
	}
	//this one might be unneccessary, but could be good to have for safety
	pf->flags[5] = '\0';
}

void	handle_width(t_pf *pf)
{
	while ((pf->format[pf->i] >= '0') && (pf->format[pf->i] <= '9'))
	{
		pf->width *= 10;
		pf->width += (pf->format[pf->i] - '0');
		(pf->i)++;
	}
}

void	handle_precision(t_pf *pf)
{
	while (pf->format[pf->i] == '.')
	{
		(pf->i)++;
		pf->precision = 0;
	}
	while ((pf->format[pf->i] >= '0') && (pf->format[pf->i] <= '9'))
	{
		pf->precision *= 10;
		pf->precision += (pf->format[pf->i] - '0');
		(pf->i)++;
	}
}

void	handle_modifiers(t_pf *pf)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (pf->mod_mask[i])
	{
		while (pf->mod_mask[i] == pf->format[pf->i])
		{
			while ((pf->format[pf->i] == 'l') && pf->i++)
				pf->mod_flag[0] = 'l';
			while ((pf->format[pf->i] == 'L') && pf->i++)
				pf->mod_flag[1] = 'L';
			while ((pf->format[pf->i] == 'h') && pf->i++)
				pf->mod_flag[2] = 'h';
			
			j++;
		}
		i++;
	}
}

void	handle_specifier(t_pf *pf)
{
	int i;

	i = 0;
	while (pf->spec_mask[i] != '\0')
	{
		if (pf->spec_mask[i] == pf->format[pf->i])
			pf->spec_flag = pf->spec_mask[i];
		i++;
	}	
}








#include "ft_printf.h"
#include "libft.h"

int	handle_specs(t_pf *pf)
{
	int count;

	count = 0;
	if (ft_strchr(pf->format, '%') == 0)
		return (0);
	while (pf->format[pf->i] != '\0')
	{
		if (pf->format[pf->i] == '%')
		{
			//PRINT FORMAT STRING UP TO %
			print_format_str(pf, count);
			reinit(pf);

			//HANDLE FORMAT SPECIFIER	
			(pf->i)++;
			handle_flags(pf);
			handle_width(pf);	
			handle_precision(pf);
			handle_modifiers(pf);
			handle_specifier(pf);
			
			//PRINT FORMAT WITH PROPER EVERYTHING
			print_format(pf);			

			count = 0;
		}
		else
		{
			count++;
			pf->len++;
		}
		(pf->i)++;
	}
	print_format_str(pf, count);
	return(pf->len);
}

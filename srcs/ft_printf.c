#include "../includes/ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	t_pf	*pf;
	int	ret;

	if (!(pf = (t_pf*)malloc(sizeof(t_pf))))
		return (-1);
	pf->format = format;
	initializer(pf);
	if (format)
	{
		va_start(pf->args, format);
		pf->len = handle_specs(pf);
		va_end(pf->args);
	}
	ret = pf->len;
	free(pf);
	return (ret);
}

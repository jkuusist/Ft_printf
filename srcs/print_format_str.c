#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void	print_format_str(t_pf *pf, int count)
{
	char *str;

	str = NULL;
	if (count <= 0)
		return ;
	str = ft_strndup(pf->format + (pf->i - count), count);
	ft_putstr(str);
	free(str);
}

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void	fill_width(t_pf *pf, char c, int len, int is_update)
{
	char *s;

	if (len > 0)
	{
		if (is_update)
			pf->len += len;
		if (!(s = ft_strnew(len)))
			exit(-1);
		ft_memset(s, c, len);
		ft_putstr(s);
		free(s);
	}
}

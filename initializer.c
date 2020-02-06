#include <stdlib.h>
#include "ft_printf.h"

t_struct	*initializer(t_struct *new)
{
	new->formatcpy = new->format;
	new->res = 0;
	new->int = 0;
}

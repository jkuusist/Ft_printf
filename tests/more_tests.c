#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
	int r1 = printf("%d\n", -4242);
	int r2 = ft_printf("%d\n", -4242);
	printf("real is %d\nmine is %d\n", r1, r2);

	return 0;
}

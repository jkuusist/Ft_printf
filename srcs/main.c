#include <stdio.h>

#include "ft_printf.h"

int main()
{
	char ch1 = 'M';
	int in1 = 53;
	
	int ret_val = ft_printf("ch1 is: %c\nin1 is: %c\n", ch1, in1);
	
	//printf("\nret_val is %d\n", ret_val);

	return (0);
}

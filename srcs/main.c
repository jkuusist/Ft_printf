#include <stdio.h>

#include "../includes/ft_printf.h"

int main()
{
	char ch1 = 'M';
	int in1 = -0;
	char *str = ";rmgs;gks   twjj;snfggsn 			#$%%@WLSRFSL";
	
	int ret_val = ft_printf("ch1 is: %c\nin1 is: %d\nstr is: %s\n", ch1, in1, str);
	
	//printf("\nret_val is %d\n", ret_val);

	return (0);
}

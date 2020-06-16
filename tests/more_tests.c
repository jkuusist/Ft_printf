#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{
/*
	int r1 = printf("%d\n", -4242);
	int r2 = ft_printf("%d\n", -4242);
	printf("real is %d\nmine is %d\n", r1, r2);
*/
	int r3 = printf("% d\n", 91);
	int r4 = ft_printf("% d\n", 91);
	printf("real is %d\nmine is %d\n", r3, r4);
	printf("\n");
	
	int r5 = printf("%+d\n", 91);
	int r6 = ft_printf("%+d\n", 91);
	printf("real is %d\nmine is %d\n", r5, r6);
	printf("\n");

	int r7 = printf("%+d\n", 0);
	int r8 = ft_printf("%+d\n", 0);
	printf("real is %d\nmine is %d\n", r7, r8);
	printf("\n");
	
	int r9 = printf("% d\n", 0);
	int r10 = ft_printf("% d\n", 0);
	printf("real is %d\nmine is %d\n", r9, r10);
	printf("\n");
	
	int r11 = printf("% +d\n", 122);
	int r12 = ft_printf("% +d\n", 122);
	printf("real is %d\nmine is %d\n", r11, r12);
	printf("\n");

	return 0;
}

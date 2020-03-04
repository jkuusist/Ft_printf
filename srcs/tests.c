#include <stdio.h>
#include <ctype.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <wctype.h>

int main()
{
/*
	//int test
	printf("   printf output: %d\n", 93);
	ft_printf("ft_printf output: %d\n", 93);
	printf("\n");
	printf("   printf output: %i\n", 789878908);
	ft_printf("ft_printf output: %i\n", 789878908);
	printf("\n");

	//char test
	printf("   printf output: %c\n", 'E');
	ft_printf("ft_printf output: %c\n", 'E');
	printf("\n");
	printf("   printf output: %c\n", '*');
	ft_printf("ft_printf output: %c\n", '*');
//	printf("\n");
//	printf("   printf output: %c\n", 27);
//	ft_printf("ft_printf output: %c\n", 27);
	printf("\n");
	wint_t c = 38;
	printf("%lc\n", c);
	ft_printf("%lc\n", c);

	//string test
	printf("   printf output: %s\n", "rgs3859230#$^&4ts	24505y6iepgdjkfv.s");
	ft_printf("ft_printf output: %s\n", "rgs3859230#$^&4ts	24505y6iepgdjkfv.s");
	printf("\n");

*/
/*
	//double test
	printf("   printf output: %f\n", 1.61803398);
	ft_printf("ft_printf output: %f\n", 1.61803398);
	printf("\n");
	printf("   printf output: %f\n", 0.32567445);
	ft_printf("ft_printf output: %f\n", 0.32567445);
	printf("\n");
	printf("   printf output: %f\n", 2376.2565823482);
	ft_printf("ft_printf output: %f\n", 2376.2565823482);
	printf("\n");
	double dub = 16.2565823434;
	printf("   printf output: %f\n", dub);
	ft_printf("ft_printf output: %f\n", dub);
	printf("\n");
	printf("   printf output: %f\n", -56.485849);
	ft_printf("ft_printf output: %f\n", -56.485849);
	printf("\n");
*/

	double preci = 456.346565787232;
	printf("   printf output: %.10f\n", preci);
	ft_printf("ft_printf output: %.10f\n", preci);
	printf("\n");

/*
	double pointy = 83525.0;
	printf("   printf output: %#6.0f\n", pointy);
	ft_printf("ft_printf output: %#6.0f\n", pointy);
*/
/*
	//octal test
	printf("   printf output: %o\n", 9836);
	ft_printf("ft_printf output: %o\n", 9836);
	printf("\n");
	printf("   printf output: %O\n", 37131);
	ft_printf("ft_printf output: %O\n", 37131);
	printf("\n");
	printf("   printf output: %#o\n", 93423);
	ft_printf("ft_printf output: %#o\n", 93423);
	printf("\n");
	printf("   printf output: %#O\n", 6641);
	ft_printf("ft_printf output: %#O\n", 6641);
	printf("\n");
*/

/*
	//hex test
	printf("   printf output: %x\n", 147050);
	ft_printf("ft_printf output: %x\n", 147050);
	printf("\n");
	printf("   printf output: %X\n", 1048575);
	ft_printf("ft_printf output: %X\n", 1048575);
	printf("\n");

	printf("   printf output: %#x\n", 419419);
	ft_printf("ft_printf output: %#x\n", 419419);
	printf("\n");
	printf("   printf output: %#X\n", 14606046);
	ft_printf("ft_printf output: %#X\n", 14606046);
	printf("\n");
*/
/*
	//pointer test
	int a = 8329;
	int *ap = &a;
	printf("   printf output: %p\n", ap);
	ft_printf("ft_printf output: %p\n", ap);
	printf("\n");
	char c = '8';
	char *charp = &c;
	printf("   printf output: %p\n", charp);
	ft_printf("ft_printf output: %p\n", charp);
	printf("\n");
	long huey = 3454843;
	long *hup = &huey;
	long **hupp = &hup;
	printf("   printf output: %p\n", hupp);
	ft_printf("ft_printf output: %p\n", hupp);
	printf("\n");

	//binary test
	ft_printf("ft_printf output: %b\n", 8);
	printf("\n");
	ft_printf("ft_printf output: %b\n", 20543);
*/
/*
	//h test
	short sh = 32767;
	printf("   printf output: %hd\n", sh);
	ft_printf("ft_printf output: %hd\n", sh);
	printf("\n");
	printf("   printf output: %hx\n", sh);
	ft_printf("ft_printf output: %hx\n", sh);
	printf("\n");
	printf("   printf output: %ho\n", sh);
	ft_printf("ft_printf output: %ho\n", sh);
	printf("\n");
	printf("   printf output: %hu\n", sh);
	ft_printf("ft_printf output: %hu\n", sh);
	printf("\n");

	//hh test
	char chh = '~';
	printf("   printf output: %hhd\n", chh);
	ft_printf("ft_printf output: %hhd\n", chh);
	printf("\n");
	printf("   printf output: %hhx\n", chh);
	ft_printf("ft_printf output: %hhx\n", chh);
	printf("\n");
	printf("   printf output: %hho\n", chh);
	ft_printf("ft_printf output: %hho\n", chh);
	printf("\n");
	printf("   printf output: %hhu\n", chh);
	ft_printf("ft_printf output: %hhu\n", chh);
*/
/*
	//l test
	long banana = 3147483647;
	printf("   printf output: %ld\n", banana);
	ft_printf("ft_printf output: %ld\n", banana);
	printf("\n");
	printf("   printf output: %lo\n", banana);
	ft_printf("ft_printf output: %lo\n", banana);
	printf("\n");
	printf("   printf output: %lx\n", banana);
	ft_printf("ft_printf output: %lx\n", banana);
	printf("\n");
	printf("   printf output: %lX\n", banana);
	ft_printf("ft_printf output: %lX\n", banana);
*/
/*
	//double l, ll and L tests
	float it = 43543.232434566564534;
	printf("   printf output: %lf\n", it);
	ft_printf("ft_printf output: %lf\n", it);
	printf("\n");
	printf("   printf output: %llf\n", it);
	ft_printf("ft_printf output: %llf\n", it);
	printf("\n");

	long double itd = 43543.232434566564534;
	printf("   printf output: %Lf\n", itd);
	ft_printf("ft_printf output: %Lf\n", itd);
*/

	return (0);
}

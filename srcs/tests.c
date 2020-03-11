#include <stdio.h>
#include <ctype.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <wctype.h>

int main()
{
/*
	//multiple format specifiers test
	unsigned long ul = 95483845;
	char c5 = '$';
	double f5 = 99.999999;

	printf("   printf output: unsigned long is %lu. char is %c. double is %f.\n", ul, c5, f5);
	ft_printf("ft_printf output: unsigned long is %lu. char is %c. double is %f.\n", ul, c5, f5);
	printf("\n");

	//int test
	printf("   printf output: %d\n", 93);
	ft_printf("ft_printf output: %d\n", 93);
	printf("\n");
	printf("   printf output: %i\n", 789878908);
	ft_printf("ft_printf output: %i\n", 789878908);
	printf("\n");

	//int with plus flag test
	printf("   printf output: %+d\n", 1563);
	printf("ft_printf output: %+d\n", 1563);
	printf("\n");

	//int with plus and space flags test
//	printf("   printf output: % +d\n", 11500);
	ft_printf("ft_printf output: % +d\n", 11500);
	printf("\n");

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


	//double with # flag test
	double pointy = 83525.0;
	printf("   printf output: %#.0f\n", pointy);
	ft_printf("ft_printf output: %#.0f\n", pointy);
	printf("\n");


	//double with precision test
	double preci = 456.346565787232453476458;
	printf("   printf output: %.17f\n", preci);
	ft_printf("ft_printf output: %.17f\n", preci);
	printf("\n");

	//double l and L tests	
	double michael = 867.475;
	printf("   printf output: %lf\n", michael);
	ft_printf("ft_printf output: %lf\n", michael);
	printf("\n");

	long double itd = 43543.232434566564534;
	printf("   printf output: %Lf\n", itd);
	ft_printf("ft_printf output: %Lf\n", itd);
	printf("\n");


	//char test
	printf("   printf output: %c\n", 'E');
	ft_printf("ft_printf output: %c\n", 'E');
	printf("\n");

	printf("   printf output: %c\n", '*');
	ft_printf("ft_printf output: %c\n", '*');
	printf("\n");

	wint_t winc = 38;
	printf("   printf output: %lc\n", winc);
	ft_printf("ft_printf output: %lc\n", winc);
	printf("\n");

	//string test
	printf("   printf output: %s\n", "rgs3859230#$^&4ts	24505y6iepgdjkfv.s");
	ft_printf("ft_printf output: %s\n", "rgs3859230#$^&4ts	24505y6iepgdjkfv.s");
	printf("\n");


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
	printf("\n");

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
	printf("\n");

	

	//double flags test
	double bub = 89843.3447658;
	printf("%+#f\n", bub);
	ft_printf("%+#f\n", bub);
	printf("\n");

	//space flag test
	printf("% d\n", 894);
	ft_printf("% d\n", 894);
	printf("\n");
	printf("% d\n", -545);
	ft_printf("% d\n", -545);
	printf("\n");

	printf("% f\n", 1.23562);
	ft_printf("% f\n", 1.23562);
	printf("\n");
	printf("% f\n", 0.00000);
	ft_printf("% f\n", 0.00000);
	printf("\n");
	printf("% f\n", -2.655);
	ft_printf("% f\n", -2.655);
	printf("\n");


	//field width tests
	printf("   printf output: %6d\n", 11);
	ft_printf("ft_printf output: %6d\n", 11);
	printf("\n");

	long dude = 3762065;
	printf("   printf output: %9ld\n", dude);
	ft_printf("ft_printf output: %9ld\n", dude);
	printf("\n");

	printf("   printf output: %4c\n", 'Q');
	ft_printf("ft_printf output: %4c\n", 'Q'); 
	printf("\n");

	char *hi = "hi!";
	printf("   printf output: %6s\n", hi);
	ft_printf("ft_printf output: %6s\n", hi);
	printf("\n");

	printf("   printf output: %8o\n", 54743);
	ft_printf("ft_printf output: %8o\n", 54743);
	printf("\n");

	printf("   printf output: %#8o\n", 46983);
	ft_printf("ft_printf output: %#8o\n", 46983);
	printf("\n");
	
	printf("   printf output: %6x\n", 54743);
	ft_printf("ft_printf output: %6x\n", 54743);
	printf("\n");

	printf("   printf output: %#8x\n", 52015);
	ft_printf("ft_printf output: %#8x\n", 52015);
	printf("\n");

	printf("   printf output: %6X\n", 54743);
	ft_printf("ft_printf output: %6X\n", 54743);
	printf("\n");

	printf("   printf output: %#8X\n", 49943);
	ft_printf("ft_printf output: %#8X\n", 49943);
	printf("\n");


	//% sign tests
	printf("   printf output: %%\n");
	printf("ft_printf output: %%\n");
	printf("\n");

	printf("   printf output: %d%%\n", 160);
	ft_printf("ft_printf output: %d%%\n", 160);
*/

	//minus flag tests
	printf("%-4d\n", 2018);
	ft_printf("%-4d\n", 2018);
	printf("\n");
	
	printf("%-7dtest\n", 6001);
	ft_printf("%-7dtest\n", 6001);
	printf("\n");

	printf("%-12ftest\n", 4.5465);
	ft_printf("%-12ftest\n", 4.5465);
	printf("\n");

	printf("%-5stest\n", "hi!");
	ft_printf("%-5stest\n", "hi!");
	printf("\n");

	printf("%-3ctest\n", '?');
	ft_printf("%-3ctest\n", '?');
	printf("\n");

	printf("%-4otest\n", 40);
	ft_printf("%-4otest\n", 40);
	printf("\n");

	printf("%-4Xtest\n", 111);
	ft_printf("%-4Xtest\n", 111);
	printf("\n");
/*
	printf("BONUS PART:\n\n");
	//binary test
	ft_printf("ft_printf output: %b\n", 8);
	printf("\n");
	ft_printf("ft_printf output: %b\n", 20543);
	printf("\n");
*/

	return (0);
}

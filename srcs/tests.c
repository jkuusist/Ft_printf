#include <stdio.h>
#include <ctype.h>
#include "../includes/ft_printf.h"
#include "../Libft/libft.h"

#include <wctype.h>

int main()
{
/*
	//just a string test
	printf("   printf output: this is a test\n");	
	ft_printf("ft_printf output: this is a test\n");
	printf("\n");
*/
/*
	//multiple format specifiers test
	unsigned long ul = 95483845;
	char c5 = '$';
	double f5 = 99.999999;

	printf("   printf output: unsigned long is %lu. char is %c. double is %f.\n", ul, c5, f5);
	ft_printf("ft_printf output: unsigned long is %lu. char is %c. double is %f.\n", ul, c5, f5);
	printf("\n");
*/
/*
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
*/
/*
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
*/
/*
	//octal test
	//FOR SOME REASON, CAPITAL O SPECIFIER DOESN'T WORK ON THE OFFICIAL SCHOOL LINUX VM
	printf("   printf output: %o\n", 9836);
	ft_printf("ft_printf output: %o\n", 9836);
	printf("\n");

//	printf("   printf output: %O\n", 37131);
//	ft_printf("ft_printf output: %O\n", 37131);
//	printf("\n");

	printf("   printf output: %#o\n", 93423);
	ft_printf("ft_printf output: %#o\n", 93423);
	printf("\n");

//	printf("   printf output: %#O\n", 6641);
//	ft_printf("ft_printf output: %#O\n", 6641);
//	printf("\n");
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
*/
/*
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
	printf("\n");
*/
/*
	//double flags test
	double bub = 89843.3447658;
	printf("%+#f\n", bub);
	ft_printf("%+#f\n", bub);
	printf("\n");
*/
/*
	//space flag test
	printf("% d\n", 894);
	ft_printf("% d\n", 894);
	printf("\n");
	printf("% d\n", -545);
	ft_printf("% d\n", -545);
	printf("\n");
	printf("% d\n", 32543);
	ft_printf("% d\n", 32543);
	printf("\n");
	printf("% d\n", 0);
	ft_printf("% d\n", 0);
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
*/
/*
	//field width tests
	
	printf("   printf output: %6d\n", 11);
	ft_printf("ft_printf output: %6d\n", 11);
	printf("\n");

	long dude = 3762065;
	printf("   printf output: %9ld\n", dude);
	ft_printf("ft_printf output: %9ld\n", dude);
	printf("\n");

	printf("   printf output: %11f\n", 4.34);
	ft_printf("ft_printf output: %11f\n", 4.34);
	printf("\n");

	printf("   printf output: %5f\n", 65.89392);
	ft_printf("ft_printf output: %5f\n", 65.89392);
	printf("\n");

	printf("   printf output: %4c\n", 'Q');
	ft_printf("ft_printf output: %4c\n", 'Q'); 
	printf("\n");

	char *hi = "hi!";
	printf("   printf output: %6s\n", hi);
	ft_printf("ft_printf output: %6s\n", hi);
	printf("\n");

	printf("   printf output: %#7o\n", 983);
	ft_printf("ft_printf output: %#7o\n", 983);
	printf("\n");


	printf("   printf output: %#6x\n", 54743);
	ft_printf("ft_printf output: %#6x\n", 54743);
	printf("\n");


	printf("   printf output: %#8x\n", 52015);
	ft_printf("ft_printf output: %#8x\n", 52015);
	printf("\n");


	printf("   printf output: %7X\n", 54743);
	ft_printf("ft_printf output: %7X\n", 54743);
	printf("\n");

	printf("   printf output: %#8X\n", 49943);
	ft_printf("ft_printf output: %#8X\n", 49943);
	printf("\n");


	char r = 'r';
	char *rp = &r;
	printf("   printf output: %16p\n", rp);
	ft_printf("ft_printf output: %16p\n", rp);
	printf("\n");

	int e = 44763;
	int *ep = &e;
	printf("   printf output: |%-16p|\n", ep);
	ft_printf("ft_printf output: |%-16p|\n", ep);
	printf("\n");
*/
/*
	//% sign tests
	printf("   printf output: %%\n");
	printf("ft_printf output: %%\n");
	printf("\n");

	printf("   printf output: %d%%\n", 160);
	ft_printf("ft_printf output: %d%%\n", 160);
	printf("\n");
*/	
/*
	//minus flag tests
	printf("%-4dtest\n", 2018);
	ft_printf("%-4dtest\n", 2018);
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

	int f = 439854;
	int *fp = &f;
	printf("%-16ptest\n", fp);
	ft_printf("%-16ptest\n", fp);
	printf("\n");
*/
/*
	//zero flag test
	printf("%04dtest\n", 2018);
	ft_printf("%-4dtest\n", 2018);
	printf("\n");
	
	printf("%07dtest\n", 6001);
	ft_printf("%07dtest\n", 6001);
	printf("\n");

	printf("%012ftest\n", 4.5465);
	ft_printf("%012ftest\n", 4.5465);
	printf("\n");

	printf("%04otest\n", 40);
	ft_printf("%04otest\n", 40);
	printf("\n");

	printf("%04Xtest\n", 111);
	ft_printf("%04Xtest\n", 111);
	printf("\n");
*/


	//return value tests
//works
	int real1 = printf("hello my name is test\n");
	int my1 = ft_printf("hello my name is test\n");
	printf("real1 is %d\nmy1 is   %d\n", real1, my1);
	printf("\n");


//doesn't work
	int real2 = printf("test %d\n", 34);
	int my2 = ft_printf("test %d\n", 34);
	printf("real2 is %d\nmy2 is   %d\n", real2, my2);
	printf("\n");

//doesn't work
	int real3 = printf("test oct %o and hex %x\n", 90, 91);
	int my3 = ft_printf("test oct %o and hex %x\n", 90, 91);
	printf("real3 is %d\nmy3 is   %d\n", real3, my3);
	printf("\n");

//works
	int real4 = printf("hello %s mountaineer\n", "Seattle I am a");
	int my4 = ft_printf("hello %s mountaineer\n", "Seattle I am a");
	printf("real4 is %d\nmy4 is   %d\n", real4, my4);
	printf("\n");


//doesn't work
	int real5 = printf("%cel%co\n", 'b', 'l');
	int my5 = ft_printf("%cel%co\n", 'b', 'l');
	printf("real5 is %d\nmy5 is   %d\n", real5, my5);
	printf("\n");

//doesn't work
	int real6 = printf("floatin' %f\n", 3.605551275);
	int my6 = ft_printf("floatin' %f\n", 3.605551275);
	printf("real6 is %d\nmy6 is   %d\n", real6, my6);
	printf("\n");

//works
	int real7 = printf("more floatin' %8f\n", 7.777777777);
	int my7 = ft_printf("more floatin' %8f\n", 7.777777777);
	printf("real7 is %d\nmy7 is   %d\n", real7, my7);
	printf("\n");

//doesn't work
	int real8 = printf("good point: %p\n", &real7);
	int my8 = ft_printf("good point: %p\n", &real7);
	printf("real8 is %d\nmy8 is   %d\n", real8, my8);
	printf("\n");

//doesn't work (overshoot)
	int real9 = printf("scary one: %06d\n", 11);
	int my9 = ft_printf("scary one: %06d\n", 11);
	printf("real9 is %d\nmy9 is   %d\n", real9, my9);
	printf("\n");

//doesn't work (overshoot)
	int real10 = printf("another scary: %6d\n", 9999);
	int my10 = ft_printf("another scary: %6d\n", 9999);
	printf("real10 is %d\nmy10 is   %d\n", real10, my10);
	printf("\n");

//doesn't work
	int my12 = ft_printf("this is bin: %b\n", 38);
	printf("my122 is %d\n", my12);
	printf("\n");


/*
	printf("BONUS PART:\n\n");
	//binary test
	ft_printf("ft_printf output: %b\n", 8);
	printf("\n");
	ft_printf("ft_printf output: %b\n", 20543);
	printf("\n");

	
	//filechecker test
	
	int r1 = printf("%10s is a string\n", "this");
	int r2 = ft_printf("%10s is a string\n", "this");
	printf("real %d\nmine %d\n\n", r1, r2);
*/
/*
	int r3 = printf("%.2s is a string\n", "this");
	int r4 = ft_printf("%.2s is a string\n", "this");
	printf("\nreal %d\nmine %d\n\n", r3, r4);

	int r5 = printf("%5.2s is a string\n", "this");
	int r6 = ft_printf("%5.2s is a string\n", "this");
	printf("\nreal %d\nmine %d\n\n", r5, r6);
*/

	return (0);
}

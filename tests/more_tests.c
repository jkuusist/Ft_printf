#include "../includes/ft_printf.h"
#include <stdio.h>

int main()
{

	int r1 = printf("%d\n", -4242);
	int r2 = ft_printf("%d\n", -4242);
	printf("real is %d\nmine is %d\n", r1, r2);
	printf("\n");

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

	
	int r13 = printf("|%-10.5o|\n", 2500);
	int r14 = ft_printf("|%-10.5o|\n", 2500);
	printf("real is %d\nmine is %d\n", r13, r14);
	printf("\n");
	
	int r132 = printf("|%-12.5o|\n", 2500);
	int r142 = ft_printf("|%-12.5o|\n", 2500);
	printf("real is %d\nmine is %d\n", r132, r142);
	printf("\n");


	int r15 = printf("%0+5d\n", 42);
	int r16 = ft_printf("%0+5d\n", 42);
	printf("real is %d\nmine is %d\n", r15, r16);
	printf("\n");
	
	int r152 = printf("%0+7d\n", 7142);
	int r162 = ft_printf("%0+7d\n", 7142);
	printf("real is %d\nmine is %d\n", r152, r162);
	printf("\n");


	int r17 = printf("%05d\n", -42);
	int r18 = ft_printf("%05d\n", -42);
	printf("real is %d\nmine is %d\n", r17, r18);
	printf("\n");
	
	int r19 = printf("%0+5d\n", -42);
	int r20 = ft_printf("%0+5d\n", -42);
	printf("real is %d\nmine is %d\n", r19, r20);
	printf("\n");


	int r21 = printf("|%-5o|\n", 2500);
	int r22 = ft_printf("|%-5o|\n", 2500);	
	printf("real is %d. mine is %d\n\n", r21, r22);

	int r23 = printf("|%-#6o|\n", 2500);
	int r24 = ft_printf("|%-#6o|\n", 2500);
	printf("real is %d. mine is %d\n\n", r23, r24);

	int r25 = printf("|%-05o|\n", 2500);
	int r26 = ft_printf("|%-05o|\n", 2500);
	printf("real is %d. mine is %d\n\n", r25, r26);


	int r27 = printf("% d\n", -42);
	int r28 = ft_printf("% d\n", -42);
	printf("real is %d. mine is %d\n\n", r27, r28);
	
	int r29 = printf("% +d\n", -42);
	int r30 = ft_printf("% +d\n", -42);
	printf("real is %d. mine is %d\n\n", r29, r30);

	int r31 = printf("%+ d\n", -42);
	int r32 = ft_printf("%+ d\n", -42);
	printf("real is %d. mine is %d\n\n", r31, r32);

	int r33 = printf("%  +d\n", -42);
	int r34 = ft_printf("%  +d\n", -42);
	printf("real is %d. mine is %d\n\n", r33, r34);

	int r35 = printf("%+  d\n", -42);
	int r36 = ft_printf("%+  d\n", -42);
	printf("real is %d. mine is %d\n\n", r35, r36);

	int r37 = printf("% ++d\n", -42);
	int r38 = ft_printf("% ++d\n", -42);
	printf("real is %d. mine is %d\n\n", r37, r38);

	int r39 = printf("%++ d\n", -42);
	int r40 = ft_printf("%++ d\n", -42);
	printf("real is %d. mine is %d\n\n", r39, r40);

	int r41 = printf("%5d\n", -42);
	int r42 = ft_printf("%5d\n", -42);
	printf("real is %d. mine is %d\n\n", r41, r42);
	
	int r43 = printf("%hhd\n", 128);
	int r44 = ft_printf("%hhd\n", 128);
	printf("real is %d. mine is %d\n\n", r43, r44);

	int r45 = printf("%hhd\n", -129);
	int r46 = ft_printf("%hhd\n", -129);
	printf("real is %d. mine is %d\n\n", r45, r46);
	
	int r47 = printf("%lld\n", -9223372036854775808);
	int r48 = ft_printf("%lld\n", -9223372036854775808);
	printf("real is %d. mine is %d\n\n", r47, r48);


	int r49 = printf("|%4.15d|\n", 42);
	int r50 = ft_printf("|%4.15d|\n", 42);
	printf("real is %d. mine is %d\n\n", r49, r50);

	int r51 = printf("|%.10d|\n", 4242);
	int r52 = ft_printf("|%.10d|\n", 4242);
	printf("real is %d. mine is %d\n\n", r51, r52);

	int r53 = printf("|%10.5d|\n", 4242);
	int r54 = ft_printf("|%10.5d|\n", 4242);
	printf("real is %d. mine is %d\n\n", r53, r54);

	int r55 = printf("|%-10.5d|\n", 4242);
	int r56 = ft_printf("|%-10.5d|\n", 4242);
	printf("real is %d. mine is %d\n\n", r55, r56);

	int r57 = printf("|% 10.5d|\n", 4242);
	int r58 = ft_printf("|% 10.5d|\n", 4242);
	printf("real is %d. mine is %d\n\n", r57, r58);


	int r59 = printf("%+10.5d\n", 4242);
	int r60 = ft_printf("%+10.5d\n", 4242);
	printf("real is %d. mine is %d\n\n", r59, r60);

	int r61 = printf("|%-+10.5d|\n", 4242);
	int r62 = ft_printf("|%-+10.5d|\n", 4242);
	printf("real is %d. mine is %d\n\n", r61, r62);

	int r63 = printf("%03.2d\n", 0);
	int r64 = ft_printf("%03.2d\n", 0);
	printf("real is %d. mine is %d\n\n", r63, r64);

	int r65 = printf("%03.2d\n", 1);
	int r66 = ft_printf("%03.2d\n", 1);
	printf("real is %d. mine is %d\n\n", r65, r66);

	int r67 = printf("%.10d\n", -42);
	int r68 = ft_printf("%.10d\n", -42);
	printf("real is %d. mine is %d\n\n", r67, r68);


	int r69 = printf("% u\n", 4294967295);
	int r70 = ft_printf("% u\n", 4294967295);
	printf("real is %d. mine is %d\n\n", r69, r70);

	int r71 = printf("%+u\n", 4294967295);
	int r72 = ft_printf("%+u\n", 4294967295);
	printf("real is %d. mine is %d\n\n", r71, r72);

	int r73 = printf("%lu\n", 4294967296);
	int r74 = ft_printf("%lu\n", 4294967296);
	printf("real is %d. mine is %d\n\n", r73, r74);

	int r75 = printf("%lu\n", -42);
	int r76 = ft_printf("%lu\n", -42);
	printf("real is %d. mine is %d\n\n", r75, r76);

	int r77 = printf("%llu\n", 4999999999);
	int r78 = ft_printf("%llu\n", 4999999999);
	printf("real is %d. mine is %d\n\n", r77, r78);

	int r79 = printf("%.5u\n", 42);
	int r80 = ft_printf("%.5u\n", 42);
	printf("real is %d. mine is %d\n\n", r79, r80);


	return 0;
}

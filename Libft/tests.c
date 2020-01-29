#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <wchar.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

void	upper(char *s)
{
	if (*s >= 'n' && *s <= 'z')
		*s -= 32;	
}

void	upper2(unsigned int i, char *s)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}

char	upper3(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return c;
}

char	upper4(unsigned int i, char c)
{
	if (i == -i)
		return (0);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return c;
}

void	del(void *ptr, size_t size)
{
	(void)size;
	free(ptr);	
}

void	addone(t_list *elem)
{
	if (elem->content)
		*((int*)elem->content) += 1;
}

t_list	*addone2(t_list *elem)
{
	if (elem->content)	
		*((int*)elem->content) += 1;
	return elem;
}

int main()
{
/*
	//strlen test
	char str1[] = "Hello";
	int len1 = ft_strlen(str1);
	char str2[] = "!@#$^&*!@#		$#$^ #@$^";
	int len2 = ft_strlen(str2);
	printf("length of Hello is %d\n", len1);
	printf("length of !@#$^&*!@#		$#$^ #@$^ is %d\n", len2);
*/
/*
	//strdup test
	char src[] = "!##$%^&^*^&%$#@#%$^%&^*^&%$#$@##$";
	char *dest1 = strdup(src);
	char *dest2 = ft_strdup(src);
	printf("lib result is: %s\nmy result is: %s\n", dest1, dest2);
*/
/*
	char *str;
	char *tmp = "this is a normal test";
	int r_size = strlen(tmp);
	int size;
*/
	/*
	//strcpy test
	char src[] = "Hello";
	char dst[] = "uiytx    35kwenrlfrnalf, fx";
	printf("%s\n", dst);
	ft_strcpy(dst, src);
	printf("%s\n", dst);
*/
/*
	//strncpy test
	char src[] = "hello";
	char dst[] = "oui";
	printf("%s\n", dst);
	ft_strncpy(dst, src, 1);
	printf("%s\n", dst);
*/
/*
	//strcat test
	char dest[6] = "abc";
    char src[] = "def";	
	ft_strcat(dest, src);
    printf("%s\n", dest);
*/
/*	
   //strncat test
   	char dest[6] = "abc";
	char src[] = "def";
 	ft_strncat(dest, src, 2);
	printf("%s\n", dest);	
 */

/*
	//strlcat test
	//char dest[50] = "there is no stars in the sky";
    //char *src = "the cake is a lie !\0I'm hidden lol\r\n";
    //char dest2[50] = "there is no stars in the sky";
    //char *src2 = "the cake is a lie !\0I'm hidden lol\r\n";          
	char dest[13] = "Hello";
	char src[8] = "Seattle";
	char dest2[13] = "Hello";
	char src2[8] = "Seattle";
		
	size_t i = ft_strlcat(dest, src, 12);
	size_t i2 = strlcat(dest2, src2, 12);
	printf("ft: %s\n %lu", dest, i);
    printf("%s", "\n");
    printf("sl: %s\n %lu", dest2, i2);
*/
/*
	char	dst2[100] = "Somebody once told me-";
	char 	*src2 = "the world is gonna roll me\0';__;'\r\n";
	size_t	dstsize = strlen("the world is gonna roll me\0';__;'\r\n") + 4;
	ft_strlcat(dst2, src2, dstsize);
	printf("%s\n", dst2);
*/
/*
	//strchr test
	char* str = "Hello Seattle";
	char *c = ft_strchr(str, 'Y');
	printf("%p\n", c);
*/

	//strrchr test
/*
	int c = 'z';
	printf("%s\n", ft_strrchr("bonbons", c));
	printf("%s\n", strrchr("bonbons", c));
*/
/*
	char *src = "abbbbbbbb";
	char *d1 = strrchr(src, 'a');
	char *d2 = ft_strrchr(src, 'a');	
	printf("lib result is %s\nmy result is %s\n", d1, d2);
*/
/*
	//char* str = "Hello Seattle";
	char str[10] = "";
	char *c = ft_strrchr(str, 'a');
//	char *d = strrchr(str, 'a');
	//printf("%p\n", &str[8]);
	printf("%p %c\n", c, *c);
//	printf("%p %c\n", d, *d);
*/
/*
	//ststr test

	char *s1 = "Ane two thfourree";
	char *s2 = "";
	char *res1 = strstr(s1, s2);
	char *res2 = ft_strstr(s1, s2);
	printf ("Should be %c. Is %c\n", *res1, *res2);
*/
/*
	char *s2 = "FF";
	char *s1 = "see F your F return FF now FF";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	printf("lib result is %s\n", i1);
	printf("my result is %s\n", i2);
*/
/*
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	printf("lib result is %s\nmy result is %s\n", i1, i2);
	//printf("%s\n", i2);
*/
	//strnstr test
/*
	char *s1 = "Ane two thfourree";
	char *s2 = "four";
	char *res = strnstr(s1, s2, 5);
	printf ("Should be 0. Is %p\n", res);

	char *s1 = "A";
	char *i1 = strnstr(s1, s1, 2);
	char *i2 = ft_strnstr(s1, s1, 2);
	printf("lib result is %s\n", i1);
	printf("my result is %s\n", i2);
*/
/*
	char *s1 = "kissaasia";
	char *s2 = "aasianmatka";
	char *res = ft_strnstr(s1, s2, 5);
	char *libres = strnstr(s1, s2, 5);
	printf("mine: %s\nlib's: %s\n", res, libres);
*/
/*
	//strcmp test
	//char c1 = '\0';
	//char c2 = '\184';
	char *s1 = "hello";
	char *s2 = "hello";
	int i = ft_strcmp(s1, s2);
	int j = strcmp(s1, s2);
	printf("my result is %d\nlibrary result is %d\n", i, j);
*/
/*
 	//strncmp test
	//char *s1 = "Hello Seattle\0 I am a mountaineer";
	//char *s2 = "Hello Seattle\200 I am a mountaineer";
	//char *s1 = "";
	//char *s2 = "";
	//char *s1 = "@$@$%#^%^&^*^&*";
	//char *s2 = "@$@$%#^%^&^*^&*";
	//char *s1 = "\200\230\100\255";
	//char *s2 = "\0\230\100\255";
	char *s1 = "abcdefgh";
	char *s2 = "";
	int lib = strncmp(s1, s2, 4);
	int result = ft_strncmp(s1, s2, 4);
	printf("Should be %d. Is really %d\n", lib, result);
*/

/*
	//memset test
	char str[10];
	char str2[10];
	ft_memset(str, 117, 9);
	memset(str2, 117, 9);
	printf("mine is %s\nlibray's is %s\n", str, str2);
*/
/*
	//bzero test
	char* str = "Hello";
	printf("%p\n", str);
	ft_bzero(str, 4);
	printf("%p\n", str);
*/

	//memcpy test
/*
	char str1[] = "Hello";   
  	char str2[] = "Seattle"; 
	char str3[] = "Hello";
	printf("%s\n", str1);
  	ft_memcpy (str1, str2, 3);
	memcpy(str3, str2, 3);
	printf("mine is: %s\nlib's is: %s\n", str1, str3);
*/
/*
	void *mem = memset(mem, 'j', 30);
	void *test = ft_memcpy(mem, "zyxwvutst", 0);
	printf("mem is: %p\ntest is: %p\n", mem, test);
*/
/*
	void *p1 = memcpy(((void*)0), ((void*)0), 3);
	printf("lib returns %p\n", p1);
	void *p2 = ft_memcpy(((void*)0), ((void*)0), 3);
	printf("mine returns %p\n", p2);
*/
	//memccpy test
/*
	char s1[50] = "qwer";
 	char s2[50] = "";
 	char s3[50] = "qwer";
 	char s4[50] = "";

 	ft_memccpy(s2, s1, 't', 4);
 	memccpy(s4, s3, 't', 4);

 	printf("s2 %s\n", s2);
 	printf("s4 %s\n", s4);
*/
/*	
	char str1[] = "Hello Seattle";
	char str2[15] = "";
	char str3[15] = "";
	char *b = memccpy(str3, str1, (int)'Y', 5);
	//char *a = ft_memccpy(str2, str1, (int)'Y', 5);
	printf("LIBS: string is: %s return value is: %c\n", str3, *b);
	//printf("MINE: string is: %s return value is: %c\n", str2, *a);
*/
/*
	//memmove test
	char *str1 = "Hello Seattle";
	char *str2 = "I am a mountaineer";
	printf("%s\n", str1);
	ft_memmove(str1, str2, 5);
	printf("%s\n", str1);
*/
/*
	char str[] = "1234567890";
	printf("%s\n", str);
	ft_memmove(str + 4, str + 3, 3);
	printf("%s\n", str);
*/
/*
	char src[] = "Hello Seattle";
	char *dst = src + 1;
	char *dst2 = src + 1;
	ft_memmove(src, dst, 5);
	memmove(src, dst, 5);
	printf("mine is: %s\nlib's is: %s\n", dst, dst2);
*/
/*
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff[0xF0];
	char *libret = memmove(buff, src, 100);
	char *myret = ft_memmove(buff, src, 100);
	printf("lib ret is: %p\nmy ret is: %p\n", libret, myret);
*/
/*
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff[0xF0];

	char *ret = ft_memmove(buff, src, 100);
	if (ret == ((void *)0))
		printf("0\n");
	else
		printf("1\n");

	//ft_memmove(((void *)0), ((void *)0), 5);
*/
/*
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest = src + 1;
	ft_memmove(dest, "consectetur", 5);
	ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
	ft_memmove(dest, src, 8);
	if (src != ft_memmove(src, dest, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
*/
/*
	//memchr test
	char *str = "/|\x12\xff\x09\x42\2002\42|\\";
	char *res = memchr(str, '\200', 10);
	char *res2 = ft_memchr(str, '\200', 10);
	printf("lib's result: %c\n", *res);
	printf("my result: %c\n", *res2);
*/
/*	
	//memcmp test
	char *str1 = "Hello Seattle";
	char *str2 = "Hello Seatle";
	//char *str1 = "\xff\xaa\xde\x12";
	//char *str2 = "\xff\xaa\xde\x12MACOSAAAAA";		
	int myres = ft_memcmp(str1, str2, 13);
	int libres = memcmp(str1, str2, 13);
	printf("My res is %d. Library's res is %d\n", myres, libres);
*/
/*
	//atoi test
	//char *str = "-+296";
	//char *str = "+2147483647";
	//char *str = "    	4689tu58";
	//char *str = " akj dfns		fsng lsn";
	//char *str = "";
	//char *str = "99999999999999999999999999";
	char *str = "-99999999999999999999999999";
	int i = ft_atoi(str);
	int j = atoi(str);
	printf("String is %s\nmine returns %d\n", str, i);
	printf("library one returns %i\n", j);
*/

	//isalpha test
/*
	//char c = 'Y';
	int i = -1; //ft_isalpha(c);
	printf("char is %ls. return value is %d\n", em, i);

	int i = -1;
	while (i < 130)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/

	//isdigit test
/*
	char c = '9';;
	int i = ft_isdigit(c);
	printf("char is %c. return value is %d\n", c, i);

	int i = -1;
	while (i < 530)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/

	//isalnum test
/*
	int c = 103;
	int i = ft_isalnum(c);
	printf("char is %c. result is %d\n", c, i);

	int i = -1;
	while (i < 530)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/
/*
	//isascii test
	int c = 128;
	int i = ft_isascii(c);
	printf("char is %c. result is %d\n", c, i);

	int i = -1;
	while (i < 530)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/
/*
	//toupper test
	int c = 91;
	char i = ft_toupper(c);
	printf("result is %c\n", i);

	int i = -1;
	while (i < 530)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/
/*
	//tolower test
	int c = 60;
	char i = ft_tolower(c);
	printf("result is %c\n", i);	

	int i = 0;
	while (i < 530)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/
/*
	//memalloc test
	char *str = ft_memalloc(5);
	//int i = 0;
	printf("%p\n", str);	
	printf("%p\n", (str + 1));
	while (i < 4)
	{
		printf("%c\n", str[i]);
		i++;
	}
*/
/*
	//memdel test
	char *ptr = malloc(sizeof(char*));
	printf("%p\n", ptr);
	ft_memdel((void*)&ptr);
	printf("%p\n", ptr);
*/
/*
	//strnew test
	char *str = ft_strnew(5);
	int i = 0;
*/
/*
	while (i < 4)
	{
		printf("%c\n", str[i]);
		i++;
	}
*/
/*
	while (i < 4)
	{
		if (str[i] != 0)
			printf("failed at index %d\n", i);
		i++;
	}
	free(str);
*/
/*
	size_t size = 514;

	char *ret = ft_strnew(size);
	for (size_t i = 0;i < size + 1;i++)
		if (ret[i] != 0)
		{
			printf("failure at index %lu\n", i);
		}
		free(ret);
		printf("success\n");
*/
/*
	//strdel test
	char *str = malloc(sizeof(char*) * 6);
	int i = 0;
	while (i < 6)
	{
		str[i] = 'A';
		i++;
	}
	printf("%s %p\n", str, str);
	ft_strdel(&str);	
	printf("%s %p\n", str, str);
*/
/*
	//strclr test
	char str[] = "hello";
	printf("String is: %s\n", str);
	ft_strclr(str);
	printf("test");
	printf("String is: %s\n", str);
*/
/*
	//striter test
	char str[] = "hello seattle";
	printf("%s\n", str);
	void (*fp)(char*) = &upper;
	ft_striter(str, fp);
	printf("%s\n", str);
*/
/*
	//striteri test
	char str[] = "hello seattle";
	printf("%s\n", str);
	void (*fp)(unsigned int, char*) = &upper2;
	ft_striteri(str, fp);
	printf("%s\n", str);
*/
/*
	//strmap test
	char str[] = "oqpw6oedas;xma";
	char (*fp)(char) = &upper3;
	printf("%s\n", str);
	char *new = ft_strmap(str, fp);
	printf("%s\n", new);
*/
/*
	//strmapi test
	char str[] = "oqpwoedas;xma";
	char (*fp)(unsigned int, char) = &upper4;
	printf("%s\n", str);
	char *new = ft_strmapi(str, fp);
	printf("%s\n", new);
*/
	
/*
	//strequ test
	char *s1 = "abcde";
	char *s2 = "abcdef";
	int i = ft_strequ(s1, s2);
	printf("should be 0. is actually %d\n", i);
*/
/*
	//strnequ test
	char *s1 = "abcde";
	char *s2 = "abcdr";
	int i = ft_strncmp(s1, s2, 3);
	printf("should be 1. is actually %d\n", i);
*/
/*
	//strsub test
	char str[] = "Hello Seattle";
	char *sub = ft_strsub(str, 6, 7);
	printf("%s\n", sub);
*/
/*
	//strjoin test
	char *s1 = "Hello Seattle ";
	char *s2 = "I am a mountaineer";
	char *res = ft_strjoin(s1, s2);
	//printf("%s\n", res);
	int i = 0;
	while (i < (ft_strlen(res) + 1))
	{
		printf("%c\n", res[i]);
		i++;
	}
*/
/*
	char *s1 = "where is my ";
	char *s2 = "malloc ???";
	char *s3 = "where is my malloc ???";

	char *res = ft_strjoin(s1, s2);
	int i = 0;
	while (i < (ft_strlen(res) + 1))
	{
		printf("%c", res[i]);
		i++;
	}
	printf("\n");
*/
/*
	char *s1 = "where is my ";
	char *s2 = "malloc ???";
	char *s3 = "where is my malloc ???";

	char *res = ft_strjoin(s1, s2);
	int cmp = strcmp(res, s3);
	printf("%s\n%d", res, cmp);
*/
/*
	//strtrim test
	char s[] = "	I'm in spaaaaace	";
	//char *s = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n";
	//char *s = "";
	//char *s = "  \t \t \n   \n\n\n\t";
	char *res = ft_strtrim(s);
	printf("%s\n", res);
*/
/*
	char *s = "G";
	char *myres = ft_strtrim(s);
	printf("res is: %s\n", myres);
*/
/*
	//putstr test
	char *s = "Hello Seattle\nI am a mountaineer\n";
	ft_putstr(s);
*/
/*
	//putendl test
	char *s = "this is not a string";
	ft_putendl(s);
*/
/*
	//putnbr test
	ft_putnbr(-464643);
	printf("%c", '\n');	
	ft_putnbr(764859);
	printf("%c", '\n');
	ft_putnbr(INT_MAX);
	printf("%c", '\n');
	ft_putnbr(INT_MIN);
	printf("%c", '\n');
*/
/*	
	//putchar_fd test
	int fd = open("file", O_WRONLY);
	ft_putchar_fd('Y', fd);
	close(fd);
*/

	//putstr_fd test
	int fd = open("file", O_WRONLY);
	ft_putstr_fd("hello", fd);
	close(fd);

/*
	//putendl_fd test	
	int fd = open("file", O_WRONLY);
	ft_putendl_fd("hello", fd);
	close(fd);
*/
/*
	//putnbr_fd test	
	int fd = open("file", O_WRONLY);
	ft_putnbr_fd(-464643, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(764859, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(INT_MAX, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(INT_MIN, fd);
	ft_putchar_fd('\n', fd);
	close(fd);
*/
/*
	//itoa test
	int i = -623;
	int j = 156;
	int k = -0;
	int l = INT_MIN;
	char *s1 = ft_itoa(i);
	char *s2 = ft_itoa(j);
	char *s3 = ft_itoa(k);
	char *s4 = ft_itoa(l);
	printf("%s\n%s\n%s\n%s\n", s1, s2, s3, s4);
*/
/*
	//strsplit test
	char str[] = "Hi my name is Slim Shady";
	char **res = ft_strsplit(str, ' ');
	int i = 0;
	while (i < 7)
	{
		printf("string at index %d is %s\n", i, res[i]);
		i++;
	}
*/
/*
	//isprint test
	char c = ' ';
	int res1 = isprint(c);
	int res2 = ft_isprint(c);
	printf("lib result is %d\nmy ressult is %d\n", res1, res2);

	int i = -1;
	while (i < 530)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("failed at index %d\n", i);
			break;
		}
		i++;
	}
*/
/*	
	//lstnew test
	int i = 56;
	int *ip = &i;
	t_list *linky = ft_lstnew(ip, sizeof(int));
	printf("link's content is %d\nlink's content_size is %lu\nlink's next is %p\n", *((int*)linky->content), linky->content_size, linky->next);
*/
/*
	//lstdelone test
	char c = '&';
	char *cptr = &c;
	t_list *linky = ft_lstnew(cptr, sizeof(int));
	t_list **lp = &linky;
	printf("link's content is %d\nlink's content_size is %lu\nlink's next is %p\n\n", *((char*)linky->content), linky->content_size, linky->next);
	ft_lstdelone(lp, &del);
	if (!linky)
		printf("no list here\n");
	else
		printf("link's content is %d\nlink's content_size is %lu\nlink's next is %p\n", *((char*)linky->content), linky->content_size, linky->next);
*/
/*
	//lstdel test
	int i = 11;
	int j = 22;
	int k = 33;
	t_list *link1 = ft_lstnew(&i, sizeof(int));	
	t_list *link2 = ft_lstnew(&j, sizeof(int));	
	t_list *link3 = ft_lstnew(&k, sizeof(int));	
	link1->next = link2;
	link2->next = link3;
	printf("link1: %d, %lu, %p\n", *((int*)link1->content), link1->content_size, link1->next);
	printf("link2: %d, %lu, %p\n", *((int*)link2->content), link2->content_size, link2->next);
	printf("link3: %d, %lu, %p\n", *((int*)link3->content), link3->content_size, link3->next);

	ft_lstdel(&link1, &del);

	if (!link1)
		printf("link1 deleted\n");
	else
		printf("link1: %d, %lu, %p\n", *((int*)link1->content), link1->content_size, link1->next);
	if (!link2)
		printf("link2 deleted\n");
	else	
		printf("link2: %d, %lu, %p\n", *((int*)link2->content), link2->content_size, link2->next);
	if (!link3)
		printf("link3 deleted\n");
	else
		printf("link3: %d, %lu, %p\n", *((int*)link3->content), link3->content_size, link3->next);
*/
/*
	//lstadd test
	int i = 11;
	int j = 22;
	t_list *link1 = ft_lstnew(&i, sizeof(int));	
	t_list *link2 = ft_lstnew(&j, sizeof(int));	
	printf("link2: %d, %lu, %p\n", *((int*)link2->content), link2->content_size, link2->next);
	ft_lstadd(&link1, link2);	
	printf("link2: %d, %lu, %p\n", *((int*)link2->content), link2->content_size, link2->next);
*/
/*	
	//lstiter test
	int i = 11;
	int j = 22;
	int k = 33;
	t_list *link1 = ft_lstnew(&i, sizeof(int));	
	t_list *link2 = ft_lstnew(&j, sizeof(int));	
	t_list *link3 = ft_lstnew(&k, sizeof(int));
	link1->next = link2;
	link2->next = link3;	
	printf("link1: %d\nlink2: %d\nlink3: %d\n", *((int*)link1->content), *((int*)link2->content), *((int*)link3->content));
	ft_lstiter(link1, &addone);	
	printf("link1: %d\nlink2: %d\nlink3: %d\n", *((int*)link1->content), *((int*)link2->content), *((int*)link3->content));
*/
/*
	//lstmap test
	int i = 11;
	int j = 22;
	int k = 33;
	t_list *link1 = ft_lstnew(&i, sizeof(int));	
	t_list *link2 = ft_lstnew(&j, sizeof(int));	
	t_list *link3 = ft_lstnew(&k, sizeof(int));
	link1->next = link2;
	link2->next = link3;	
	printf("link1: %d\nlink2: %d\nlink3: %d\n", *((int*)link1->content), *((int*)link2->content), *((int*)link3->content));
	t_list *new1 = ft_lstmap(link1, &addone2);
	printf("new link1: %d\nnew link2: %d\nnew link3: %d\n", *((int*)(new1->content)), *((int*)((new1->next)->content)), *((int*)(((new1->next)->next)->content)));
*/

	return 0;
}

#include "../includes/ft_printf.h"
#include "../Libft/libft.h"
#include <stdlib.h>

char	*ft_itoa_base_pf(long num, int base, char* flags, int is_capital)
{
	char	*s;
 	long	n;
 	long	i;

	n = num;
	if (base == 8)
		i = (flags[0] == '#') ? 2 : 1;
	else if (base == 16)
		i = ((flags[0] == '#') && (num != 0)) ? 3 : 1;
 	else
 		i = 1;
	while ((n /= base) >= 1)
 		i++;
 	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
 		return (NULL);
 	s[i] = '\0';
	n = num;
 	while (i--)
 	{
 		s[i] = (n % base < 10) ? (n % base + '0') : (n % base + 'A' - 10);
 		n /= base;
 	}
	if ((flags[0] == '#') && (base == 8))
 		s[--i] = '0';
	else if ((flags[0] == '#') && (base == 16) && (num != 0))
 	{
 		s[1] = (is_capital) ? 'X' : 'x';
 		s[0] = '0';
 	}
	return (s);
}

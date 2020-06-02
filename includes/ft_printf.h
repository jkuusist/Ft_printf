#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

typedef struct	s_pf
{
	const char	*format;
	char		*formatcpy;
	va_list		args;
	int		i;
	int		len;
	long		precision;
	long		width;
	char		flags[6];
	char		*spec_mask;
	char		spec_flag;
	char		*flag_mask;
	char		*mod_mask;
	char		mod_flag[3];
}		t_pf;

int     ft_printf(const char *format, ...);
int     handle_specs(t_pf *pf);
void    print_format_str(t_pf *pf, int count);
void    initializer(t_pf *pf);
int     numlen(long long num, int base);
void	handle_flags(t_pf *pf);
void	handle_width(t_pf *pf);
void	handle_precision(t_pf *pf);
void	handle_modifiers(t_pf *pf);
void	handle_specifier(t_pf *pf);
void	print_format(t_pf *pf);
void	reinit(t_pf *pf);
void    fill_width(t_pf *pf, char c, int len, int is_update);
char    *ft_itoa_base_pf(long num, int base, char *flags, int is_capital);
void    double_to_str(double dub, char *result, int precision, char *flags);
void    print_char(t_pf *pf);
void	print_str(t_pf *pf);
void	print_int(t_pf *pf);
void	print_double(t_pf *pf);
void	print_oct(t_pf *pf);
void	print_hex(t_pf *pf);
void	print_ptr(t_pf *pf);
void	print_bin(t_pf *pf);
void	print_percent(t_pf *pf);
char    *ft_strndup(const char *s1, unsigned int n);

#endif

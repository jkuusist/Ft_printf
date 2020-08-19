# Ft_printf
My solution for 42's ft_printf project. In this project, the goal is to recreate the C standard library's printf function.

This recreation supports the following format specifiers of the real printf: cCsSdiDufFoOxXp
as well as the b format specifier to print integers in binary form.

The following flags are supported: #0-+ and space, with behaviors as close to the real printf as possible.

Also supported, where it makes sense, are the length modifiers l, ll, L, h, and hh.

Usage: ft_printf("format string", <variadic arguments if format specifiers are used in the format string>);

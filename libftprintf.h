#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int ft_printf(const char *, ...);
int ft_putstr(char *s);
int ft_putchar(int c);
int ft_putnbr_base(long num, int base);
int ft_action(char c, va_list ap);

#endif

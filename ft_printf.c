#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, str);
	while(*str)
	{
		if(*str == '%')
			counter += ft_action(*(++str), ap);
		else
			counter += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (counter);
}


int main()
{
	// ft_printf("%d\n", ft_printf("med sarda [%s]\n", "this is a test"));
	// printf("%d\n", printf("med sarda [%s]\n", "this is a test"));
	// ft_printf("med sarda [%c]\n", 'A');
	// int i = 7;
	char *p = "test";
	ft_printf("[%p]\n", p);
	printf("[%p]\n", p);
}

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;
	if (write(1, "",0) < 0)
		return (-1);
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

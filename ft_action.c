#include "libftprintf.h"

int ft_action(char c, va_list ap)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		counter = ft_putstr(va_arg(ap, char *));
	else if (c == 'd')
		counter = ft_putnbr_base(va_arg(ap, long), 10);
	return (counter);
}

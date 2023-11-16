#include "ft_printf.h"

int ft_action(char c, va_list ap)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		counter = ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		counter = ft_putnbr_base(va_arg(ap, int), 10, 0);
	else if (c == 'p')
	{
		counter += ft_putstr("0x");
		counter += ft_putnbr_hex(va_arg(ap, unsigned long), 16);
	}
	else if (c == 'u')
		counter += ft_putnbr_base(va_arg(ap, unsigned int), 10, 0);
	else if (c == 'x')
		counter += ft_putnbr_base(va_arg(ap, unsigned int), 16, 0);
	else if (c == 'X')
		counter += ft_putnbr_base(va_arg(ap, unsigned int), 16, 1);
	else if (c == '%')
		counter = ft_putchar('%');
	return (counter);
}

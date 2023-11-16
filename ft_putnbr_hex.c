#include "ft_printf.h"

int ft_putnbr_hex(unsigned long num, unsigned int base)
{
	int counter;
	char *base_char;

	counter = 0;
	base_char = "0123456789abcdef";
	if (num >= base)
	{
		counter += ft_putnbr_hex(num / base, base);
		counter += ft_putchar(base_char[num % base]);
	}
	else
		counter += ft_putchar(base_char[num % base]);
	return (counter);
}

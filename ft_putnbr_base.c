#include "libftprintf.h"
#include "libft.h"

int ft_putnbr_base(long num, int base)
{
  int count;
  char *base_char;

  count = 0;
  base_char = "01234567890abcdef";
  if (num < 0)
  {
    num *= -1;
    count += ft_putchar('-');
  }
  if (num > base)
  {
      count += ft_putnbr_base(num / base, base);
      count += ft_putchar(base_char[num % base]);
  }
  else
    count += ft_putchar(base_char[num]);
  return (count);
}
// int main()
// {
//   ft_putnbr_base(-1498495, 10);
// }

#include "ft_printf.h"

int ft_putstr(char *s)
{
  int count;

  count = 0;
  if (!s)
    s = "(null)";
  while (*s)
  {
    count += ft_putchar(*s++);
  }
  return (count);
}

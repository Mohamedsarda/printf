/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:55:50 by msarda            #+#    #+#             */
/*   Updated: 2023/11/16 16:57:55 by msarda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr_base(long num, int base, int is_m);
int	ft_putnbr_hex(unsigned long num, unsigned int base);
int	ft_action(char c, va_list ap);

#endif

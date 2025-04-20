/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulsdemi <gulsdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:59:05 by gulsdemi          #+#    #+#             */
/*   Updated: 2025/03/09 12:29:53 by gulsdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
    return write(1, &c, 1);
}

int ft_putstr(char *str)
{
    int len = 0;
    if (!str)
        str = "(null)";
    while (*str)
        len += write(1, str++, 1);
    return len;
}

int ft_putnbr(int n)
{
    int len = 0;
    if (n == -2147483648)
        return ft_putstr("-2147483648");
    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        len += ft_putnbr(n / 10);
    return len + ft_putchar((n % 10) + '0');
}

int ft_puthex(unsigned long n, char format)
{
    char *base;
    int len = 0;
    if (format == 'x')
        base = "0123456789abcdef";
    else
        base = "0123456789ABCDEF";
    if (n >= 16)
        len += ft_puthex(n / 16, format);
    return len + ft_putchar(base[n % 16]);
}

int ft_putunsigned(unsigned int n)
{
    int len = 0;
    if (n >= 10)
        len += ft_putunsigned(n / 10);
    return len + ft_putchar((n % 10) + '0');
}

int ft_putpointer(void *ptr)
{
    int len = 0;
    if (!ptr)
        return ft_putstr("(nil)");
    len += ft_putstr("0x");
    return len + ft_puthex((unsigned long)ptr, 'x');
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0, len = 0;
    if (!format)
     return (-1);
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            i++;
            if (format[i] == 'c')
                len += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                len += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                len += ft_putnbr(va_arg(args, int));
            else if (format[i] == 'u')
                len += ft_putunsigned(va_arg(args, unsigned int));
            else if (format[i] == 'x' || format[i] == 'X')
                len += ft_puthex(va_arg(args, unsigned int), format[i]);
            else if (format[i] == 'p')
                len += ft_putpointer(va_arg(args, void *));
            else if (format[i] == '%')
                len += ft_putchar('%');
        }
        else
            len += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return len;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulsdemi <gulsdemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:51:32 by gulsdemi          #+#    #+#             */
/*   Updated: 2025/04/20 14:04:47 by gulsdemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long n, char format);
int	ft_putunsigned(unsigned int n);
int	ft_putpointer(void *ptr);
int	ft_putchar(char c);

#endif
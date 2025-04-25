/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:50:08 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/25 14:36:15 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_printhex(unsigned long n, char format);
int	ft_putnbr(long int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putptr(void *s);

#endif
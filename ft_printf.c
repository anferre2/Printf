/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:04:09 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/25 15:07:34 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_variable(char s, va_list args)
{
	if (s == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (s == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (s == 'x' || s == 'X')
		return (ft_printhex(va_arg(args, unsigned int), s));
	else if (s == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_variable(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*#include <stdio.h>

int main(void)
{
    int ft_result;
    int printf_result;

    // Teste de caracteres
    ft_result = ft_printf("Char: %c\n", 'A');
    printf_result = printf("Char: %c\n", 'A');
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de string
    ft_result = ft_printf("String: %s\n", "Hello, world!");
    printf_result = printf("String: %s\n", "Hello, world!");
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de inteiros
    ft_result = ft_printf("Integer: %d\n", 123);
    printf_result = printf("Integer: %d\n", 123);
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de hexadecimais minúsculos
    ft_result = ft_printf("Hex: %x\n", 255);
    printf_result = printf("Hex: %x\n", 255);
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de hexadecimais maiúsculos
    ft_result = ft_printf("Hex (upper): %X\n", 255);
    printf_result = printf("Hex (upper): %X\n", 255);
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de ponteiros
    ft_result = ft_printf("Pointer: %p\n", (void *)123456);
    printf_result = printf("Pointer: %p\n", (void *)123456);
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    // Teste de porcentagem
    ft_result = ft_printf("Percent: %%\n");
    printf_result = printf("Percent: %%\n");
    printf("ft_printf: %d, printf: %d\n", ft_result, printf_result);

    return 0;
}*/
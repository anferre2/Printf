/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:44:27 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/25 14:40:57 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// n = numero que queremos imprimir
// format = indica se queremos imprimir minusculas ou maiusculas
int	ft_printhex(unsigned long n, char format)
{
	char	*base;
	int		count;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_printhex(n / 16, format);
	ft_putchar(base[n % 16]);
	count++;
	return (count);
}

/*int main(void)
{
    int count;

    // Testando números com ft_printhex diretamente
    count = ft_printhex(42, 'x');
    ft_putchar('\n');
    printf("Total de caracteres impressos: %d\n", count);

    count = ft_printhex(255, 'X');
    ft_putchar('\n');
    printf("Total de caracteres impressos: %d\n", count);

    count = ft_printhex(123456, 'x');
    ft_putchar('\n');
    printf("Total de caracteres impressos: %d\n", count);

    count = ft_printhex(123456, 'X');
    ft_putchar('\n');
    printf("Total de caracteres impressos: %d\n", count);

    return 0;
}*/
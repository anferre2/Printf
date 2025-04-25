/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:12:39 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/25 14:39:30 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *s)
{
	unsigned long	addr;
	int				count;

	count = 0;
	addr = (unsigned long)s;
	if (!s)
		return (ft_putstr("(nil)"));
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += ft_printhex(addr, 'x');
	return (count);
}

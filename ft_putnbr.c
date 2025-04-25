/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anferre2 <anferre2@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:57:21 by anferre2          #+#    #+#             */
/*   Updated: 2025/04/25 15:06:08 by anferre2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		count++;
	}
	if (nbr > 9)
		count += ft_putnbr(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}

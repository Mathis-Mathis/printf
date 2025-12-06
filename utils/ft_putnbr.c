/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 17:29:48 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/06 17:29:49 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_putnbr_rec(long n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putnbr_rec(n / 10);
		count += ft_putnbr_rec(n % 10);
	}
	else
	{
		count += ft_putchar(n + '0');
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	count += ft_putnbr_rec(nb);
	return (count);
}

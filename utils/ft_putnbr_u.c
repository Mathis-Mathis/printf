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

static int	ft_putnbr_u_rec(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_u_rec(nb / 10);
		count += ft_putnbr_u_rec(nb % 10);
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}

int	ft_putnbr_u(unsigned int n)
{
	return (ft_putnbr_u_rec(n));
}

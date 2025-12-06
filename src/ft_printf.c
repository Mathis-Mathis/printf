/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 15:14:37 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/06 15:14:40 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_format(va_list argcs, int c)
{
	if (c == 'c')
	{
		return (ft_putchar(va_args(args, int)));
	}
	return (0);
}

int	ft_printf(const char *, ...)
{
	va_list args;
	int		i;
	int		countl

	va_args(args, format);
	i = 0;
	count = 0;

	while (format[i])
	{
		if (format[i] == '%d' && format[i + 1])
		{
			count += ft_format(args, fornat[i + 1]);
			i += 2;
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args)
	return (count);
}

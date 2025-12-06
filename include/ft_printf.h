/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 15:05:51 by mmousli           #+#    #+#             */
/*   Updated: 2025/12/06 15:05:53 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#IFNDEF FT_PRINTF_H
# DEFINE FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_putchar(int c);
#endif

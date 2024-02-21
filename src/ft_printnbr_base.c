/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:22:48 by jrivero-          #+#    #+#             */
/*   Updated: 2023/10/09 16:23:43 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_base(size_t num, char *base)
{
	size_t	len;

	len = 1;
	if (num >= (size_t)ft_strlen(base))
	{
		len += ft_base(num / ft_strlen(base), base);
		ft_putchar_fd(base[num % ft_strlen(base)], 1);
	}
	else
		ft_putchar_fd(base[num], 1);
	return (len);
}

int	ft_printnbr_base(int num, char c)
{
	char	*hex_min;
	char	*hex_upp;
	char	*dec;

	hex_min = "0123456789abcdef";
	hex_upp = "0123456789ABCDEF";
	dec = "0123456789";
	if (c == 'd' || c == 'i')
	{
		if (num == -2147483648)
			return (write(1, "-2147483648", 11));
		else if (num < 0)
			return (ft_putchar_fd('-', 1) + ft_base(num * -1, dec));
		else
			return (ft_base(num, dec));
	}
	else if (c == 'u')
		return (ft_base((unsigned int)num, dec));
	else if (c == 'x')
		return (ft_base((unsigned int)num, hex_min));
	else
		return (ft_base((unsigned int)num, hex_upp));
}

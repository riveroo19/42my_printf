/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:30:08 by jrivero-          #+#    #+#             */
/*   Updated: 2023/10/12 13:21:14 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_isvalid(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

static int	ft_printarg(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar_fd((char)va_arg(args, int), 1));
	else if (format == 's')
		return (ft_print_s(va_arg(args, char *)));
	else if (format == 'd' || format == 'i' || format == 'u'
		|| format == 'x' || format == 'X')
		return (ft_printnbr_base(va_arg(args, int), format));
	else if (format == 'p')
		return (ft_print_p(va_arg(args, void *)));
	else if (format == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		total;
	char	*aux;

	aux = (char *)format;
	total = 0;
	va_start(args, format);
	while (*aux)
	{
		if (*aux == '%' && ft_isvalid(*(aux + 1)))
			total += ft_printarg(args, *(++aux));
		else
			total += ft_putchar_fd(*aux, 1);
		aux++;
	}
	va_end(args);
	return (total);
}

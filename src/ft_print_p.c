/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:04:38 by jrivero-          #+#    #+#             */
/*   Updated: 2023/10/09 16:32:27 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printp_aux(size_t paux, size_t lenb)
{
	char	*base;
	size_t	len;

	base = "0123456789abcdef";
	len = 1;
	if (paux >= lenb)
	{
		len += ft_printp_aux(paux / lenb, lenb);
		ft_putchar_fd(base[paux % lenb], 1);
	}
	else
		ft_putchar_fd(base[paux], 1);
	return (len);
}

int	ft_print_p(void *p)
{
	size_t	paux;

	paux = (size_t)p;
	return (ft_putstr_fd("0x", 1) + ft_printp_aux(paux, (size_t)16));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:22:20 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/28 13:09:36 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_countdec(long n)
{
	long	i;

	i = 0;
	if (n < 0)
		i++;
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*num;
	int			dec;
	long		aux;

	aux = n;
	dec = ft_countdec(n);
	num = (char *) ft_calloc((dec + 1), sizeof(char));
	if (!num)
		return (NULL);
	if (aux < 0)
	{
		num[0] = '-';
		aux *= -1;
	}
	while (dec-- > (0 + (n < 0)))
	{
		if (aux >= 10)
			num[dec] = aux % 10 + '0';
		else
			num[dec] = aux + '0';
		aux /= 10;
	}
	return (num);
}

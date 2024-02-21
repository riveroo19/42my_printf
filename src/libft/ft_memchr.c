/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:27:17 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 17:53:47 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*aux;
	size_t			i;

	aux = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == aux[i])
			return (&aux[i]);
		i++;
	}
	return (NULL);
}

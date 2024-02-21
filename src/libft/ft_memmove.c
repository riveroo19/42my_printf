/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:20:27 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 17:16:36 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*aux_dest;
	unsigned char		*aux_src;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	i = 0;
	aux_dest = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	if (aux_dest > aux_src)
	{
		i = len;
		while (i--)
			aux_dest[i] = aux_src[i];
	}
	else
	{
		while (i < len)
		{
			aux_dest[i] = aux_src[i];
			i++;
		}
	}
	return (dest);
}

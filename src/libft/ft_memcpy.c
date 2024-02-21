/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:28:42 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 16:39:26 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_src;
	size_t			i;

	aux_dest = (unsigned char *) dest;
	aux_src = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		aux_dest[i] = aux_src[i];
		i++;
	}
	return (dest);
}

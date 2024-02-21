/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:35:50 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 18:34:14 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstsz;

	i = 0;
	dstsz = (size_t)ft_strlen(dest);
	j = dstsz;
	if (size <= dstsz || size <= 0)
		return (size + (size_t)ft_strlen(src));
	while (src[i] && dstsz + i < size - 1)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dstsz + ft_strlen(src));
}

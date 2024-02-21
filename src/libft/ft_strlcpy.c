/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:37:01 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 18:34:24 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	while (cont < size - 1 && src[cont] && size != 0)
	{
		dest[cont] = src[cont];
		cont++;
	}
	if (size != 0)
		dest[cont] = '\0';
	return (ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:29:13 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/28 16:53:57 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// may consider changing: not allocate when s1 == NULL
char	*ft_strdup(const char *s1)
{
	char	*aux;
	size_t	len;

	len = ft_strlen(s1) + 1;
	if (!len)
		return (NULL);
	aux = (char *) ft_calloc(len, sizeof(char));
	if (!aux)
		return (NULL);
	while (len--)
		aux[len] = s1[len];
	return (aux);
}

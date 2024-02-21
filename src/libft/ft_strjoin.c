/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:37:36 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/21 17:13:38 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*aux;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	aux = (char *) malloc ((len1 + len2 + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	ft_strlcpy(aux, (char *)s1, len1 + len2 + 1);
	ft_strlcat(&aux[len1], (char *)s2, len1 + len2 + 1);
	return (aux);
}

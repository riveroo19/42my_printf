/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:17:12 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/22 20:35:25 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = ft_strlen(s1);
	aux = (char *)s1;
	while (*aux && ft_strchr(set, *aux))
	{
		aux++;
		i--;
	}
	while (i >= 0 && *aux && ft_strchr(set, aux[i]))
		i--;
	aux = ft_substr(aux, 0, i + 1);
	return (aux);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:39:08 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/28 16:33:01 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	total;	

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start < slen)
	{
		if (slen - start >= len)
			total = len;
		else
			total = slen - start;
	}
	else
	{
		total = 0;
		start = 0;
	}
	result = (char *)malloc(sizeof(char) * (total + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, (char *)s + start, total + 1);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:19:07 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/25 12:27:09 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s, len + 1);
	while (len-- > 0)
		str[len] = f(len, s[len]);
	return (str);
}

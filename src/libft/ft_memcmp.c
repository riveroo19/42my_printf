/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:56:06 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/19 17:59:35 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;
	size_t			i;

	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (aux_s1[i] != aux_s2[i])
			return (aux_s1[i] - aux_s2[i]);
		i++;
	}
	return (0);
}

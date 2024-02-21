/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:02:33 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/28 16:53:34 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// may need to check what if count * size surpass size_t limit -> more secure
void	*ft_calloc(size_t count, size_t size)
{
	void	*aux;

	if (count == (size_t)-1 || size == (size_t)-1)
		return (NULL);
	aux = malloc (count * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, count * size);
	return (aux);
}

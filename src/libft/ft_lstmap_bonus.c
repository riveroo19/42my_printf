/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:42:46 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/27 12:49:26 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*node;
	t_list	*new;
	void	*aux_c;

	aux = lst;
	if (!aux || !f || !del || !(aux->content))
		return (NULL);
	new = NULL;
	while (aux)
	{
		aux_c = f(aux->content);
		node = ft_lstnew(aux_c);
		if (!node)
		{
			del(aux_c);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		aux = aux->next;
	}
	return (new);
}

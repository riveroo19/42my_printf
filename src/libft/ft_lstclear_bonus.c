/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrivero- <jrivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:29:22 by jrivero-          #+#    #+#             */
/*   Updated: 2023/09/25 15:39:45 by jrivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!(*lst) || !del)
		return ;
	aux = *lst;
	while (aux)
	{
		del((*lst)->content);
		*lst = (*lst)->next;
		free(aux);
		aux = *lst;
	}
}

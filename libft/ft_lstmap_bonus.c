/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:06:57 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/20 20:06:59 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new;
	t_list	*result;

	aux = NULL;
	new = NULL;
	if (lst == NULL)
	{
		return (0);
	}
	while (lst != NULL)
	{
		result = f(lst->content);
		aux = ft_lstnew(result);
		if (aux == NULL)
		{
			del(result);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
		lst = lst->next;
	}
	return (new);
}

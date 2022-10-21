/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:18:16 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/12 18:01:10 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new_list;
	t_list	*new_node;

	tmp = lst;
	new_list = NULL;
	if (lst)
	{
		while (tmp)
		{
			new_node = ft_lstnew(f(tmp->content));
			if (!new_node)
				ft_lstclear(&new_list, del);
			else
			{
				ft_lstadd_back(&new_list, new_node);
				tmp = tmp->next;
			}
		}
	}
	return (new_list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:04:37 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/19 22:43:03 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = *lst;
	if (tmp && del)
	{
		while (tmp)
		{
			*lst = (*lst)->next;
			ft_lstdelone(tmp, del);
			tmp = *lst;
		}
		*lst = NULL;
	}
}

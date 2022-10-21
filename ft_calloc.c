/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:19:09 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/10 19:27:21 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	mem_size;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	mem_size = count * size;
	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem_size);
	return (ptr);
}

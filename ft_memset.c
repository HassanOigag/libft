/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:57:30 by hoigag            #+#    #+#             */
/*   Updated: 2022/09/30 17:18:50 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	size_t			i;

	i = 0;
	mem = (unsigned char *) b;
	while (i < len)
	{
		mem[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

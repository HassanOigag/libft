/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:26:26 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/20 16:52:32 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*nsrc;
	unsigned char		*ndst;

	nsrc = (unsigned char *)src;
	ndst = (unsigned char *)dst;
	if (dst > src)
		while (len--)
			ndst[len] = nsrc[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:27:01 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/12 16:43:14 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	if (dstsize == 0 || ft_strlen(dest) >= dstsize)
		return (dstsize + ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	while (src[i] && i < dstsize - dst_len - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}

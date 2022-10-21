/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:21:41 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/02 14:41:51 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*p;

	i = ft_strlen(s);
	p = (char *) s;
	while (i >= 0)
	{
		if (p[i] == (char) c)
			return (&p[i]);
		i--;
	}
	return (NULL);
}

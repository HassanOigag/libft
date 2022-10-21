/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:20:57 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/13 13:21:00 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_nbrlen(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = (long int) n;
	i = ft_nbrlen(nb);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	if (nb == 0)
		str[0] = nb + 48;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoigag <hoigag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:45:57 by hoigag            #+#    #+#             */
/*   Updated: 2022/10/19 23:19:32 by hoigag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int		counter;
	size_t	i;
	int		found;

	found = 0;
	counter = 0;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if ((s[i] == c || s[i] == '\0') && found)
		{
			counter++;
			found = 0;
		}
		if (s[i] != c && !found)
			found = 1;
		i++;
	}
	return (counter);
}

static int	wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	int			counter;
	char		**words;

	counter = 0;
	words = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			words[counter] = ft_substr(s, 0, wordlen(s, c));
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	words[counter] = 0;
	return (words);
}

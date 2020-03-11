/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:52:59 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/25 14:03:00 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		word_count(const char *s, char c)
{
	int			i;

	i = 0;
	if (*s && *s != c)
	{
		s++;
		i++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				i++;
		}
		s++;
	}
	return (i);
}

static int		length(const char *s, char c)
{
	int i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	int		i[3];

	if (!s)
		return (0);
	words = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!words)
		return (0);
	i[0] = 0;
	i[1] = 0;
	while (*s)
	{
		if (!i[1] && *s != c)
		{
			i[2] = length(s, c);
			words[i[0]] = ft_strsub(s, 0, i[2]);
			i[0]++;
			i[1] = 1;
		}
		else if (*s == c)
			i[1] = 0;
		s++;
	}
	words[i[0]] = 0;
	return (words);
}

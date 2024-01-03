/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:55:06 by akheired          #+#    #+#             */
/*   Updated: 2024/01/03 14:37:24 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	cwords(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (*(str + i))
	{
		if (*(str + i) != c)
		{
			counter++;
			while (*(str + i) && *(str + i) != c)
				i++;
		}
		else if (*(str + i) == c)
			i++;
	}
	return (counter);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	fr_er(char **dst, size_t i)
{
	while (i > 0)
	{
		i--;
		free(*(dst + i));
	}
	free (dst);
}

static char	**spliter(char const *s, char c, char **dst, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(dst + i) = ft_substr(s, j, word_len((s + j), c));
		if (!*(dst + i))
		{
			fr_er(dst, i);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(dst + i) = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**dst;

	words = cwords(s, c);
	dst = malloc(sizeof(char *) * (words + 1));
	if (!dst)
		return (NULL);
	dst = spliter(s, c, dst, words);
	return (dst);
}

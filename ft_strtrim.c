/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:33:17 by akheired          #+#    #+#             */
/*   Updated: 2023/12/19 16:28:53 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	to_right(const char *str, const char *set)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] && set[j])
	{
		if (str[i] == j[set])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

size_t	str_len(char const *str, char const *set)
{
	size_t	l_str;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	l_str = ft_strlen(str) - 1;
	while (set[i] && str[l_str])
	{
		if (set[i] == str[l_str])
		{
			l_str--;
			i = 0;
			count++;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	size_t			l_str;
	size_t			l_s;
	size_t			i;

	i = 0;
	l_s = ft_strlen(s1);
	start = to_right(s1, set);
	l_str = l_s - (start - str_len(s1, set));
	str = malloc(sizeof(char) * l_str + 1);
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	str[i] = 0;
	return (ft_substr(str, start, l_str));
}

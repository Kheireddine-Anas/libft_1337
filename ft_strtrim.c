/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:33:17 by akheired          #+#    #+#             */
/*   Updated: 2024/01/03 14:38:15 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_right(const char *str, const char *set)
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

static int	str_len(char const *str, char const *set)
{
	int	l_str;
	int	i;

	i = 0;
	l_str = ft_strlen(str) - 1;
	while (set[i] && l_str > 0)
	{
		if (set[i] == str[l_str])
		{
			l_str--;
			i = 0;
		}
		else
			i++;
	}
	return (l_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	int				start;
	int				l_str;

	str = (char *)s1;
	start = to_right(str, set);
	l_str = str_len(str, set);
	if (!str || !set)
		return (NULL);
	return (ft_substr(str, start, (l_str - start) + 1));
}

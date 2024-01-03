/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:01:22 by akheired          #+#    #+#             */
/*   Updated: 2024/01/03 14:37:43 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	c_word(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*rzlt;
	size_t	y;

	if (!s)
		return (NULL);
	y = 0;
	str = malloc(sizeof(char) * (c_word(s) + 1));
	if (!str)
		return (NULL);
	rzlt = str;
	while (*s)
		*str++ = f(y++, *s++);
	*str = '\0';
	return (rzlt);
}

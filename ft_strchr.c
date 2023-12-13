/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <kheireddine.anas@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:25:39 by akheired          #+#    #+#             */
/*   Updated: 2023/12/13 23:25:39 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ca;

	ca = (char)c;
	str = s;
	while (*str)
	{
		if (*str == ca)
			return ((char *)&s);
		str++;
	}
	if (str == ca)
		return ((char *)&s);
	return (NULL);
}
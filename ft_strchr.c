/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:25:39 by akheired          #+#    #+#             */
/*   Updated: 2023/12/14 17:50:51 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		cc;
	const unsigned char	*str;

	cc = (unsigned char)c;
	str = (const unsigned char *)s;
	while (*str)
	{
		if (*str == cc)
			return ((char *)str);
		str++;
	}
	if (cc == '\0')
		return ((char *)str);
	return (0);
}

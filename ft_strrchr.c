/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:54:14 by akheired          #+#    #+#             */
/*   Updated: 2023/12/14 19:20:33 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				count;
	unsigned char		cc;
	const unsigned char	*str;

	cc = (unsigned char)c;
	count = ft_strlen(s);
	str = (const unsigned char *)s;
	while (count--)
	{
		if (str[count] == cc)
			return ((char *)str + count);
	}
	if (cc == '\0')
		return ((char *)str + ft_strlen(s));
	return (0);
}

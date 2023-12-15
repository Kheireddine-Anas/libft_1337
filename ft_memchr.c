/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:02:13 by akheired          #+#    #+#             */
/*   Updated: 2023/12/15 13:52:40 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		cc;
	size_t				i;

	i = 0;
	cc = (unsigned char)c;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)str + i);
		i++;
	}
	return (0);
}

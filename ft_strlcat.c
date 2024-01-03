/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:51:31 by akheired          #+#    #+#             */
/*   Updated: 2024/01/03 18:53:59 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l_dst;
	size_t	frscp;
	size_t	l_src;
	size_t	i;

	i = 0;
	if ((!dst || !src) && !dstsize)
		return (0);
	l_src = ft_strlen(src);
	if (dstsize == 0)
		return (l_src);
	l_dst = ft_strlen(dst);
	frscp = dstsize - l_dst - 1;
	if (l_dst >= dstsize)
		return (l_src + dstsize);
	while (src[i] && i < frscp)
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = 0;
	return (l_src + l_dst);
}

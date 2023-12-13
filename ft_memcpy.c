/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <kheireddine.anas@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:48:12 by akheired          #+#    #+#             */
/*   Updated: 2023/12/13 22:48:12 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d_hld;
	unsigned char	*s_hld;

	d_hld = (unsigned char *)dst;
	s_hld = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (n-- > 0)
		*d_hld++ = *s_hld++;
	return (dst);
}

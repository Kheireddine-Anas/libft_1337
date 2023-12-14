/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:52:42 by akheired          #+#    #+#             */
/*   Updated: 2023/12/14 17:14:18 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dhld;
	char	*shld;
	size_t	i;

	i = 0;
	dhld = (char *)dst;
	shld = (char *)src;
	if (dst == src)
		return (dst);
	if (dhld > shld)
		while (len-- > 0)
			dhld[len] = shld[len];
	else
	{
		while (i < len)
		{
			dhld[i] = shld[i];
			i++;
		}
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <kheireddine.anas@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:05:02 by akheired          #+#    #+#             */
/*   Updated: 2023/12/13 20:05:02 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n-- > 0 && str)
	{
		*str++ = (char)c;
	}
	return (s);
}
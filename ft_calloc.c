/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 15:40:00 by akheired          #+#    #+#             */
/*   Updated: 2023/12/16 16:51:24 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*hld;

	hld = malloc(count * size);
	if (!hld)
		return (NULL);
	ft_bzero(hld, count * size);
	return (hld);
}

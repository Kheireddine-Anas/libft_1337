/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:04:14 by akheired          #+#    #+#             */
/*   Updated: 2023/12/27 22:04:14 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *content)
{
	free(content);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	while (*lst)
	{
		tmp = *lst;
		del((*lst)->content);
		*lst = (*lst)->next;
		free(tmp);
	}
}


int main()
{
	t_list *lst1 = ft_lstnew("Milom");
	t_list *lst2 = ft_lstnew("Kile");
	t_list *lst3 = ft_lstnew("Fdol");
	ft_lstadd_back(&lst1, lst2);
	ft_lstadd_back(&lst1, lst3);
	printf("%d", ft_lstsize(lst1));
	ft_lstclear(&lst1, del);
	if (lst1 == NULL)
		printf("DDDD");
	printf("%d", ft_lstsize(lst1));
}
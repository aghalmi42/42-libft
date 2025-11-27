/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:06:13 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:36:38 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int main(void)
{
	t_list *lst = NULL;
	t_list *elem1 = ft_lstnew("Paris");
	t_list *elem2 = ft_lstnew("42");
	t_list *elem3 = ft_lstnew("Salut");

	ft_lstadd_front(&lst, elem1);
	ft_lstadd_front(&lst, elem2);
	ft_lstadd_front(&lst, elem3);

	t_list *tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	return (0);
}
*/
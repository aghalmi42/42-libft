/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:12:26 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:35:17 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
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
	t_list *elem1 = ft_lstnew("Salut");
	t_list *elem2 = ft_lstnew("42");
	t_list *elem3 = ft_lstnew("Paris");

	ft_lstadd_back(&lst, elem1);
	ft_lstadd_back(&lst, elem2);
	ft_lstadd_back(&lst, elem3);

	t_list *tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	return (0);
}
*/
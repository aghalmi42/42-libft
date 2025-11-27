/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 02:55:19 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:44:11 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	t_list *elem1 = ft_lstnew("Salut");
	t_list *elem2 = ft_lstnew("42");
	t_list *elem3 = ft_lstnew("Paris");

	elem1->next = elem2;
	elem2->next = elem3;

	t_list *last = ft_lstlast(elem1);

	if (last)
		printf("Le dernier élément est : %s\n", (char *)last->content);
	else
		printf("Liste vide.\n");

	free(elem1);
	free(elem2);
	free(elem3);

	return (0);
}
*/
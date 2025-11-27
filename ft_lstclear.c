/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:17:37 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:39:18 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst)
		return ;
	if (!del)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
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

void	del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *lst = NULL;
	t_list *elem1 = ft_lstnew(ft_strdup("Salut"));
	t_list *elem2 = ft_lstnew(ft_strdup("42"));
	t_list *elem3 = ft_lstnew(ft_strdup("Paris"));

	elem1->next = elem2;
	elem2->next = elem3;
	lst = elem1;

	printf("Avant clear :\n");
	t_list *tmp = lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, del);

	if (lst == NULL)
		printf("\nListe bien vidée ✅\n");
	else
		printf("\nErreur : liste non vidée ❌\n");

	return (0);
}
*/
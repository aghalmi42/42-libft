/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:08:38 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:49:39 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->content = content;
	node->next = NULL;
	return node;
}

int main(void)
{
	t_list *elem1 = ft_lstnew("Salut");
	t_list *elem2 = ft_lstnew("42");
	t_list *elem3 = ft_lstnew("Paris");

	elem1->next = elem2;
	elem2->next = elem3;

	printf("Taille de la liste : %d\n", ft_lstsize(elem1));

	free(elem1);
	free(elem2);
	free(elem3);

	return 0;
}
*/
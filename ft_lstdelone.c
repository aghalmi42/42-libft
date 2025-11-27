/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 21:15:20 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:40:45 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (!del)
		return ;
	del(lst->content);
	free(lst);
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
	t_list *elem = ft_lstnew(ft_strdup("Hello World"));

	printf("Avant suppression : %s\n", (char *)elem->content);

	ft_lstdelone(elem, del);

	printf("Maillon supprimé avec succès ✅\n");

	return (0);
}
*/
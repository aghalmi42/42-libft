/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:02:37 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:48:32 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int main(void)
{
	t_list *elem;

	elem = ft_lstnew(ft_strdup("Hello World"));

	if (elem)
	{
		printf("Contenu du maillon : %s\n", (char *)elem->content);
		printf("Next du maillon : %p\n", (void *)elem->next);
	}

	free(elem->content);
	free(elem);

	return 0;
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:33:18 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:46:57 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_elem = ft_lstnew(new_content);
		if (!new_elem)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
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

void	*to_upper(void *content)
{
	char *str = (char *)content;
	char *new_str = ft_strdup(str);
	if (!new_str)
		return (NULL);
	for (int i = 0; new_str[i]; i++)
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
	}
	return new_str;
}

int main(void)
{
	t_list *elem1 = ft_lstnew(ft_strdup("salut"));
	t_list *elem2 = ft_lstnew(ft_strdup("42"));
	t_list *elem3 = ft_lstnew(ft_strdup("paris"));
	elem1->next = elem2;
	elem2->next = elem3;

	printf("Liste originale :\n");
	t_list *tmp = elem1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	t_list *new_lst = ft_lstmap(elem1, to_upper, del);

	printf("\nListe après ft_lstmap :\n");
	tmp = new_lst;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&elem1, del);
	ft_lstclear(&new_lst, del);

	return 0;
}
*/
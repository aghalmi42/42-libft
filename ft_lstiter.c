/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 02:59:45 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:43:06 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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

void	print_upper(void *content)
{
	char *str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
}

int main(void)
{
	t_list *elem1 = ft_lstnew(ft_strdup("salut"));
	t_list *elem2 = ft_lstnew(ft_strdup("42"));
	t_list *elem3 = ft_lstnew(ft_strdup("paris"));

	elem1->next = elem2;
	elem2->next = elem3;

	printf("Avant ft_lstiter :\n");
	t_list *tmp = elem1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstiter(elem1, print_upper);

	printf("\nAprès ft_lstiter :\n");
	tmp = elem1;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}

	t_list *next;
	tmp = elem1;
	while (tmp)
	{
		next = tmp->next;
		free(tmp->content);
		free(tmp);
		tmp = next;
	}

	return (0);
}
*/
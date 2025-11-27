/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:33:48 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/11 12:50:31 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*total;

	total = malloc(nmemb * size);
	if (!total)
		return (NULL);
	ft_bzero(total, nmemb * size);
	return (total);
}
/*
#include <stdio.h>

int main(void)
{
	char ptr = ft_calloc(5, sizeof(char));
	printf("%s\n", ");
	free (ptr);
	return (0);
}
*/
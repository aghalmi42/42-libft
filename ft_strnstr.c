/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 22:52:58 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 17:46:20 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] == big[i + j] && little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strnstr("hello world", "wor", 15));
	return (0);
}
*/
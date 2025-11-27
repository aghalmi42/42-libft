/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:40:11 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 19:33:11 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = -1;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && src)
		return (NULL);
	if (d < s)
	{
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char str[20] = "hello world";
	ft_memmove(str + 6, str + 5, 20);
	printf("%s\n", str);
	return (0);
}
*/
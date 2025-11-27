/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 12:00:06 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 14:35:33 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		last = ((char *)(s + i));
	return (last);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_strrchr("hello", 'l'));
	return (0);
}
*/
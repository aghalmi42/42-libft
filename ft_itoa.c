/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 02:38:50 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 14:38:37 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	value_negatif(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	len_number(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = len_number(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = value_negatif(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	char *s = ft_itoa(-123);
	printf("%s\n", s);
	free (s);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghalmi <aghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:21:01 by aghalmi           #+#    #+#             */
/*   Updated: 2025/11/10 16:07:55 by aghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c && !word)
		{
			word = 1;
			count++;
		}
		else if (*s == c)
			word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	split_words(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substr(s, start, i - start);
		if (!result[j++])
		{
			free_split(result);
			return (0);
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c))
		return (NULL);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;
	char	*str = "Salut  les   amis";
	char	sep = ' ';

	result = ft_split(str, sep);
	if (!result)
	{
		printf("Erreur d'allocation\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("mot[%d] = \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
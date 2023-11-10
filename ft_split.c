/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:27:55 by beroy             #+#    #+#             */
/*   Updated: 2023/11/10 11:03:51 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	if (s[i] != c)
		words++;
	i++;
	while (s[0] && s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

size_t	ft_wdlen(char const *s, char c, size_t j)
{
	size_t	i;

	i = j;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

char	*ft_strldup(char const *s, char c, size_t *j)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_wdlen(s, c, *j);
	str = malloc(sizeof(char) * (len - *j + 1));
	if (str == NULL)
		return (str);
	i = 0;
	while (*j < len)
	{
		str[i] = s[*j];
		*j += 1;
		i++;
	}
	str[i] = 0;
	return (str);
}

void	*ft_splitdestroy(char **split)
{
	size_t i;

	while (split[i] != NULL)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	words;
	char	**split;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	words = ft_countwords(s, c);
	split = ft_calloc((words + 1), sizeof(char *));
	if (split == NULL)
		return (split);
	while (i < words)
	{
		if (s[j] != c)
		{
			split[i++] = ft_strldup(s, c, &j);
			if (split[i - 1] == NULL)
				return (ft_splitdestroy(split));
		}
		else
			j++;
	}
	return (split);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char **split;
	char **split2;
	int	i;

	if (argc < 3)
		return (0);
	split = ft_split(argv[1], argv[2][0]);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}*/

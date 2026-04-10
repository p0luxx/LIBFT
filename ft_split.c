/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:00:13 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/10 16:05:28 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;
	int		flag;

	i = 0;
	flag = 0;
	if (!*s)
		return (0);
	while (s[i] == c)
		i++;
	words = 1;
	while (s[i])
	{
		if (s[i] == c && flag == 0)
			flag = 1;
		if (s[i] != c && flag == 1)
		{
			flag = 0;
			words++;
		}
		i++;
	}
	return (words);
}

static size_t	ft_strlenchr(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	**free_all(char **s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		free(s[len]);
		len++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	j = 0;
	res = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			res[++j] = ft_substr(s, i, ft_strlenchr(&s[i], c));
			if (!res[j])
				return (((void **)free_all(res)));
			j++;
		}
		i += ft_strlenchr(&s[i], c);
	}
	res[j] = NULL;
	return (res);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char **res = ft_split(argv[1], ' ');
		int	i = 0;
		while (res[i])
		{
			printf("%s\n", res[i]);
			i++;
		}
	}
	return (0);
}*/
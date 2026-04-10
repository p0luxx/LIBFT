/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 12:31:28 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/10 12:55:50 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reserver(size_t len_1, size_t len_2)
{
	char	*s;

	s = (char *)malloc((len_1 + len_2 + 1) * sizeof(char));
	if (!s)
		return (NULL);
	return (s);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*res;

	i = 0;
	res = reserver(s1_len, s2_len);
	if (!res || !s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[s1_len + i] = s2[i];
		i++;
	}
	res[s1_len + i] = '\0';
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *res = ft_strjoin(argv[1], argv[2]);
		printf("%s\n", res);
		free(res);
	}
	return (0);
}*/
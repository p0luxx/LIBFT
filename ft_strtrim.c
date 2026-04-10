/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:35:44 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/10 14:17:09 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char	*res = ft_strtrim(argv[1], argv[2]);
		printf("%s\n", res);
		free(res);
	}
	return (0);
}*/
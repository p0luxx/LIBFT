/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:44:55 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/15 13:44:58 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strnlen(char *s, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[start + i])
		i++;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (((size_t)start) >= ft_strlen(s))
	{
		res = (char *)malloc(1 * sizeof(char));
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = (char *)malloc((ft_strnlen(((char *)s), start, len) + 1) * 1);
	if (!res)
		return (NULL);
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *res = ft_substr(argv[1], (unsigned int)atoi(argv[2]),
        (size_t)atoi(argv[3]));
        printf("%s\n", res);
        free(res);
    }
    return (0);
}*/

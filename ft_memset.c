/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:43:10 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/15 13:43:13 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s[99];
	char	s1[99];
	char	seg[2];

	 //I'm not putting a null character at the end
	 //which could lead to undefined behavior with printf.
	printf("Expected: 'x' * 11 -> %s\n", ft_memset(s, 'x', 11));
	printf("Expected: Nothing %s\n", ft_memset(s1, 'z', 0));
	printf("Expected: Indefinite behavior %s\n", ft_memset(seg, 's', 999));
	return (0);
}*/

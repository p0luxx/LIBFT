/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:46:17 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/15 13:46:52 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	*p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			p = &((unsigned char *)s)[i];
		i++;
	}
	if (((unsigned char *)s)[i] == ((unsigned char)c))
		p = &((unsigned char *)s)[i];
	return (((char *)p));
}

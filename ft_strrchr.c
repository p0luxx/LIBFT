/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:14:40 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/07 17:23:28 by gorkgall         ###   ########.fr       */
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

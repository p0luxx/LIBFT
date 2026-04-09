/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:55:20 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/07 17:12:11 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (&((char *)s)[i]);
		i++;
	}
	if (((unsigned char *)s)[i] == ((unsigned char)c))
		return (&((char *)s)[i]);
	return (NULL);
}

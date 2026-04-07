/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:37:48 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/07 18:48:15 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *small, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (*small == '\0')
		return (&big[0]);
	if (*big == '\0')
		return (NULL);
	while (big[i] && i < n)
	{
		k = 0;
		while (small[k] && i + k < n)
		{
			if (big[i + k] == small[k])
				k++;
			else
				break ;
		}
		if (small[k] == '\0')
			return (&big[i]);
		i++;
	}
	return (NULL);
}

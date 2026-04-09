/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:45:04 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/09 12:45:04 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;
	size_t	total;

	res = NULL;
	total = num * size;
	if (num != 0 && size > (size_t)-1 / num)
		return (NULL);
	res = (void *)malloc(total);
	if (!res)
		return (NULL);
	ft_bzero(res, total);
	return (res);
}

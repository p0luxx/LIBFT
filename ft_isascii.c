/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:53:15 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/06 17:53:20 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && 127 >= c)
		return (c);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isascii(0));
	return (0);
}*/

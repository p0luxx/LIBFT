/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:43:16 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/14 15:43:32 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 32)
		return (c -= 32);
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	return (0);
}*/

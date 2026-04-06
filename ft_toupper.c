/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:54:35 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/06 17:54:42 by gorkgall         ###   ########.fr       */
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

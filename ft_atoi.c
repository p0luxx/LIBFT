/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:54:22 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/07 19:44:01 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int ft_isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (c);
	return (0);
}*/

static int	ft_check(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		np;
	int		res;

	i = 0;
	np = ft_check(nptr);
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		res *= 10;
		res = res + (nptr[i] - '0');
		i++;
	}
	return (res * np);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/

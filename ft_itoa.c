/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:40:58 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/15 13:47:31 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_count_digits(int nb)
{
	size_t	digits;

	digits = 0;
	if (nb <= 0)
		digits++;
	while (nb != 0)
	{
		nb = nb / 10;
		digits++;
	}
	return (digits);
}

char	*ft_reverse(char *str)
{
	char	a;
	char	z;
	size_t	i;
	size_t	k;

	a = '0';
	z = '0';
	i = 0;
	k = ft_strlen(str) - 1;
	while (i < k)
	{
		a = str[i];
		z = str[k];
		str[i] = z;
		str[k] = a;
		i++;
		k--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*res;
	size_t		i;
	size_t		n_digits;

	n_digits = ft_count_digits(n);
	i = -1;
	res = (char *)malloc((n_digits + 1) * sizeof(char));
	if (!res)
		return (NULL);
	num = n;
	if (num < 0)
		num = -num;
	if (num == 0)
		res[++i] = '0';
	while (num != 0)
	{
		res[++i] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		res[++i] = '-';
	res[++i] = '\0';
	ft_reverse(res);
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		char *res = ft_itoa(atoi(argv[1]));
		printf("%s\n", res);
		free(res);
	}
	return (0);
}*/

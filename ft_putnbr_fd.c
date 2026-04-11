/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:22:46 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/11 17:34:05 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, char fd)
{
	char		res;
	long long	nbr;

	res = '0';
	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	res = (nbr % 10) + '0';
	write (fd, &res, 1);
}

/*
int	main(void)
{
	ft_putnbr_fd(-99888, 1);
	write (1, "\n", 1);
	return (0);
}*/
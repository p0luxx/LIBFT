/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorkgall <gorkgall@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:01:07 by gorkgall          #+#    #+#             */
/*   Updated: 2026/04/09 21:01:07 by gorkgall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  i;
    size_t  s_len;
    char    *res;

    i = 0;
    s_len = ft_strlen(s);
    res = (char *)malloc((s_len + 1) * sizeof(char));
    if (!res)
        return (NULL);
    while (s[i])
    {
        res[i] = s[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *res = ft_strdup(argv[1]);
        printf("%s\n", res);
        free (res);
    }
    else
        return(7);

    return (0);
}*/
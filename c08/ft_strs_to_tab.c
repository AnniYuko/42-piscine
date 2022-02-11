/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:11:05 by akroll            #+#    #+#             */
/*   Updated: 2022/02/04 22:11:05 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * (str_len(src) + 1));
	ft_strcpy(dest, src);
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *st;
	int i;

	st = malloc(sizeof(t_stock_str)*(ac+1));
	if (st == NULL)
		return(NULL);
	i = 0;
	while (i < ac)
	{
		st[i].size = str_len(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i]);
		i++;
	}
	st[i].str = 0;
	return(st);
}

int	main(void)
{
	char **av;
	int ac;

	ac = 4;
	av = malloc(sizeof(char*)*(ac + 1));
	av[0] = "create";
	av[1] = "a";
	av[2] = "function";
	av[3] = "that";
	av[4] = '\0';
	ft_strs_to_tab(ac, av);
	return(0);
}

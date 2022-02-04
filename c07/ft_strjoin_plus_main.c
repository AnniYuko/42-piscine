/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:40:18 by akroll            #+#    #+#             */
/*   Updated: 2021/12/17 18:40:18 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	// if (str == NULL)
	// 	return (-1);
	length = 0;
	while (*str++ != '\0')
		length++;
	return (length);
}

char	*ft_strcpy_alt(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	int		strs_size;
	char	*joined_str;
	char	*p_jstr;

	// if (size <= 0)
	// {
	// 	joined_str = '\0';		//need malloc here ??
	// 	return (joined_str);
	// }
	strs_size = 0;
	i = 0;
	while (i < size)
	{
		strs_size += ft_strlen(strs[i]);
		i++;
	}
	printf("strs_size: %d\nsep_size: %d (%d-mal)\n", strs_size, ft_strlen(sep), size - 1);
	printf("size of joined string: %d\n", (strs_size + ((size - 1) * ft_strlen(sep)) + 1));
	joined_str = malloc(sizeof(char) * (strs_size + ((size - 1) * ft_strlen(sep))) + 1);		//check if size > 0?
	if (joined_str == NULL)
		return (0);
	a = 0;
	p_jstr = joined_str;
	while (a < size)
	{
		p_jstr = ft_strcpy_alt(p_jstr, strs[a]);
		if (a < size - 1)
			p_jstr = ft_strcpy_alt(p_jstr, sep);
		a++;
	}
	// p_jstr = '\0';
	return (joined_str);
}

int	main(void)
{
	char	**strs;
	int		i;
	int		size;

	size = 3;
	strs = malloc(sizeof(char*) * size + 1);
	i = 0;
	while (i < size)
	{
		strs = malloc(sizeof(char));
		i++;
	}
	if (strs == NULL)
		return (0);
	strs[0] = "gatto";
	strs[1] = "mariposa";
	strs[2] = "Tsukiko";

	printf("joined_str: %s\n", ft_strjoin(size, strs, " + "));
	return(0);
}

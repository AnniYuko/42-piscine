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

// Write a function that will concatenate all the strings pointed by strs separated by
// sep.
// • if size is 0, it should a freeable empty string (which only contains '\0')

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_size;
	char	*joined_str;
	char	*p_jstr;

	if (size <= 0)
	{
		joined_str = '\0';
		return (joined_str);
	}
	strs_size = 0;
	i = 0;
	while (i < size)
	{
		strs_size += ft_strlen(strs[i]);
		i++;
	}
	joined_str = malloc(sizeof(char) * (strs_size + ((size - 1) * ft_strlen(sep))) + 1);
	if (joined_str == NULL)
		return (0);
	i = 0;
	p_jstr = joined_str;
	while (i < size)
	{
		p_jstr = ft_strcpy_alt(p_jstr, strs[i]);
		if (i < (size - 1))
			p_jstr = ft_strcpy_alt(p_jstr, sep);
		i++;
	}
	// p_jstr = '\0';
	return (joined_str);
}

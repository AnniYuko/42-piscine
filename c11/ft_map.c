/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:16:09 by akroll            #+#    #+#             */
/*   Updated: 2022/03/02 17:16:09 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc(sizeof(int) * length);
	if (arr == NULL)
		return(NULL);
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return(arr);
}

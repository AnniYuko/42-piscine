/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:49:34 by akroll            #+#    #+#             */
/*   Updated: 2021/12/07 21:49:34 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size_of_range;

	i = 0;
	size_of_range = max - min;
	if (size_of_range <= 0)
		{
			range = NULL;
			return (0);
		}
	range = (int*) malloc(sizeof(int) * size_of_range);
	if (range == NULL)
		return (-1);
	while (i < size_of_range)
	{
		range[i++] = min++;
	}
	return (size_of_range);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:20:09 by akroll            #+#    #+#             */
/*   Updated: 2022/03/02 22:20:09 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Returns 1 if array sorted, 0 if not.
	The function it points to returns an int
	< 0 if first arg < second arg,
	 0  if first arg == second arg,
	> 0 in any other case.
*/

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
			return(0);
		i++;
	}
	return(1);
}

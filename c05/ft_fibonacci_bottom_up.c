/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_bottom_up.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:52:02 by akroll            #+#    #+#             */
/*   Updated: 2022/02/04 18:52:02 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci_bottom_up(int n)
{
	unsigned int i;
	int one_before;
	int two_before;
	int fib;

	if (n < 0)
		return(-1);
	if (n < 2)
		return(n);
	two_before = 0;
	one_before = 1;
	i = 1;
	while (i < n)
	{
		fib = one_before + two_before;
		two_before = one_before;
		one_before = fib;
		i++;
	}
	return(fib);
}

int	main(void)
{
	int number;

	number = 3;
	printf("input: %d, fibonacci: %d\n", number, ft_fibonacci_bottom_up(number));
	return(0);
}

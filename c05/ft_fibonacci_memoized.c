/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_memoized.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:01:50 by akroll            #+#    #+#             */
/*   Updated: 2022/02/04 01:01:50 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	store[100];

int ft_fibonacci_mem(int n)
{
	if (n < 0)
		return(-1);
	if (n < 2)
		return(n);
	if (store[n] > 0)
		return(store[n]);

	store[n] = ft_fibonacci_mem(n - 1) + ft_fibonacci_mem(n - 2);
	return(store[n]);
}

int main(int argc, char **argv)
{
	unsigned int i;
	(void)argc;
	printf("fibonacci of %d is:%d\n", atoi(argv[1]), ft_fibonacci_mem(atoi(argv[1])));
	return(0);
}

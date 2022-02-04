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

int ft_fibonacci_mem(int n)
{
	int *store;
	unsigned int i;

	if (n < 0)
		return(-1);

	// allocate memory and initialize with -1
	store = malloc(sizeof(int) * (n + 1));
	i = 0;
	while (i < n + 1)
	{
		store[i] = -1;
		i++;
	}

	store[0] = 0;
	store[1] = 1;
	if (store[n] >= 0)
		return(store[n]);
	store[n] = ft_fibonacci_mem(n - 1) + ft_fibonacci_mem(n - 2);
	return(store[n]);
}


int main(int argc, char **argv)
{
	(void)argc;
	printf("fibonacci of %d is:%d\n", atoi(argv[1]), ft_fibonacci_mem(atoi(argv[1])));
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:08:57 by akroll            #+#    #+#             */
/*   Updated: 2022/02/06 14:26:20 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return(0);

	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return(1);

	if (!(nb % 2 && nb % 3 && nb % 5 && nb % 7))
		return(0);
	return(1);
}

int	main(void)
{
	int nb;

	nb = 2147483647;
	printf("Is %d a prime number?\n", nb);
	if (ft_is_prime(nb))
		printf("Yes, it is.\n");
	else
		printf("No, it isn't.\n");
	return(0);
}

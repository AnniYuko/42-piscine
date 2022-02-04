/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:30:25 by akroll            #+#    #+#             */
/*   Updated: 2021/12/02 17:02:04 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2 == 0)
	{
		p = ft_recursive_power(nb, (power / 2));
		return (p * p);
	}
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

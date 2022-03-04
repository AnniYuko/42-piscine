/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:48:53 by akroll            #+#    #+#             */
/*   Updated: 2022/03/04 18:48:53 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && is_whitespace(str))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && is_numeric(str))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return(sign * nb);
}

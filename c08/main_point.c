/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:22:44 by akroll            #+#    #+#             */
/*   Updated: 2022/02/04 21:22:44 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;

	set_point(&point);
	printf("x: %d\n", point.x);
	printf("y: %d\n", point.y);
	return (0);
}

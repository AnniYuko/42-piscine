/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 22:39:57 by akroll            #+#    #+#             */
/*   Updated: 2022/03/02 22:39:57 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

/*
	commandline args: value1, operateur ("+", "-", "*", "/", "%"), value2
	values might have leading whitespace
*/

// ! check for undefined behaviour (MAXINT+1, MININT-1)

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 4)
		return(1);

	a = ft_atoi(argv[1]);		//get value1 as int
	b = ft_atoi(argv[3]);		//get value2 as int
	ft_math(argv, a, b);
	write(1, "\n", 1);
	return(0);
}

int	ft_math(char **argv, int a, int b)
{
	int	(*math_arr[4])(int, int);	//declare array of function pointers

	math_arr[0] = &add;
	math_arr[1] = &sub;
	math_arr[2] = &div;
	math_arr[3] = &mult;
	math_arr[4] = &mod;

	if (*argv[2] == '+')
		ft_putnbr(math_arr[0](a, b));

	else if (*argv[2] == '-')
		ft_putnbr(math_arr[1](a, b));

	else if (*argv[2] == '/')
	{
		if (b == 0)
			write(1, "Stop: division by zero", 22);
		else
			return(math_arr[2](a, b));
	}
	else if (*argv[2] == '*')
		ft_putnbr(math_arr[3](a, b));

	else if (*argv[2] == '%')
	{
		if (b == 0)
			write(1, "Stop: modulo by zero", 20);
		else
			ft_putnbr(math_arr[4](a, b));
	}
	else
		ft_putnbr(0);
	return(0);
}

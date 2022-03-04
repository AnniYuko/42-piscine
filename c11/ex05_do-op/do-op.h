/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:40:39 by akroll            #+#    #+#             */
/*   Updated: 2022/03/04 17:40:39 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
#define DO_OP_H

#include <unistd.h>
#include <stdio.h>

typedef enum{
	FALSE,
	TRUE
}bool;

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_math(char **argv, int a, int b);
bool	is_numeric(char *str);
bool	is_whitespace(char *str);
int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mult(int a, int b);
int		mod(int a, int b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:37:22 by akroll            #+#    #+#             */
/*   Updated: 2022/01/26 15:37:22 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <stdio.h>
#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN(x) !(x % 2)
#define TRUE 1
#define FALSE 0
#define SUCCESS 0

typedef int t_bool;

ssize_t write(int fd, const void *buf, size_t count);

#endif //FT_BOOLEAN_H

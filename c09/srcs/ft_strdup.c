/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:17:47 by akroll            #+#    #+#             */
/*   Updated: 2021/12/06 20:17:47 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char *ft_strdup(char *src)
{
    char *dest;

    dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
    ft_strcpy(dest, src);
    return (dest);
}

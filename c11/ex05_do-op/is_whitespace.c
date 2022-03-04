/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:04:57 by akroll            #+#    #+#             */
/*   Updated: 2022/03/04 18:04:57 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

bool	is_whitespace(char *str)
{
	if (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\v' || *str == '\f')
		return(TRUE);
	else
		return(FALSE);
}

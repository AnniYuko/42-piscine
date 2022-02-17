/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:50:02 by akroll            #+#    #+#             */
/*   Updated: 2022/02/14 17:50:02 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 1;
	if (begin_list == NULL)
		return(0);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return(i);
}

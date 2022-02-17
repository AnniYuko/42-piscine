/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:09:00 by akroll            #+#    #+#             */
/*   Updated: 2022/02/14 21:09:00 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	while ((*begin_list)->next != NULL)
	{
		*begin_list = (*begin_list)->next;
	}
	(*begin_list)->next = ft_create_elem(data);
	return;
}

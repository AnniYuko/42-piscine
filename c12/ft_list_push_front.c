/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:45:06 by akroll            #+#    #+#             */
/*   Updated: 2022/02/12 20:45:06 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../c09/includes/ft.h"
#include "ft_create_elem.c"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	begin_list = &new_elem;
	}
}

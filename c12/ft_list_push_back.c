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
#include "ft_create_elem.c"
#include "ft_list_size.c"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*p_elem;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return;
	}
	p_elem = *begin_list;
	while (p_elem->next != NULL)
	{
		p_elem = p_elem->next;
	}
	p_elem->next = ft_create_elem(data);

	//printf("Currently %d element(s) in the list.\n", ft_list_size(*begin_list));
	return;
}

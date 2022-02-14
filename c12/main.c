/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:20:51 by akroll            #+#    #+#             */
/*   Updated: 2022/02/13 17:20:51 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../c09/includes/ft.h"

int main(void)
{
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list **begin_list;
	void *data;

	elem1 = ft_create_elem(data);
	elem2 = ft_create_elem(data);
	elem1->next = elem2;
	elem3 = ft_create_elem(data);
	elem2->next = elem3;

	begin_list = &elem1;

	printf("Currently %d element(s) in the list.\n", ft_list_size(*begin_list));

	ft_list_push_back(begin_list, data);
	return(0);
}

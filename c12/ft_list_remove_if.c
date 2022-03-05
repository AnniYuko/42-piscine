/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:57:43 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 15:57:43 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

//	removes all elements that compared to data_ref using cmp return 0

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *prev;	//real previous elem in the list (not deleted/to be deleted)
	t_list *delete; //marker

	prev = NULL;
	delete = NULL;
	while (*begin_list != NULL)
	{
		if (0 == (*cmp)((*begin_list)->data, data_ref))
		{
			//check if first elem of list
			if (prev != NULL)
				prev->next = (*begin_list)->next;
			(*free_fct)((*begin_list)->data);
			delete = *begin_list;
		}
		//don't save as prev elem of the list if it gets deleted
		if (*begin_list != delete)
			prev = *begin_list;
		*begin_list = (*begin_list)->next;
		if (delete != NULL)
		{
			free(delete);
			delete = NULL;
		}
	}
}

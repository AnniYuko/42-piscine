/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:52:24 by akroll            #+#    #+#             */
/*   Updated: 2022/02/15 20:52:24 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next_elem;

	while (begin_list != NULL)
	{
		next_elem = begin_list->next;
		(*free_fct)(begin_list->data);
		free(begin_list);
		begin_list = next_elem;
	}
}

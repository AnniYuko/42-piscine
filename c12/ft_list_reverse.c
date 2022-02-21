/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 08:48:19 by akroll            #+#    #+#             */
/*   Updated: 2022/02/18 08:48:19 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*before;
	t_list	*next;
	t_list	*elem;

	//first element
	before = *begin_list;
	next = (*begin_list)->next;
	(*begin_list)->next = NULL;
	*begin_list = next;

	while ((*begin_list)->next != NULL)
	{
		elem = *begin_list;
		next = (*begin_list)->next;
		(*begin_list)->next = before;
		(*begin_list) = next;
		before = elem;
	}
	//last element
	(*begin_list)->next = before;
}

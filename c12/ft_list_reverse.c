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

	//empty list
	if (*begin_list == NULL)
		return;

	//first element
	before = NULL;

	while ((*begin_list)->next != NULL)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = before;
		before = *begin_list;
		(*begin_list) = next;
	}
	//last element
	(*begin_list)->next = before;
}

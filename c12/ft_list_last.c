/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 22:28:55 by akroll            #+#    #+#             */
/*   Updated: 2022/02/14 22:28:55 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*p_elem;

	//empty list
	if (begin_list == NULL)
		return(NULL);

	//one or more elem in list
	p_elem = begin_list;
	while (p_elem->next != NULL)
		p_elem = p_elem->next;

	//reached last elem
	return(p_elem);
}

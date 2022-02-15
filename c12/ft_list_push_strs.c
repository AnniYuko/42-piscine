/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:37:17 by akroll            #+#    #+#             */
/*   Updated: 2022/02/15 11:37:17 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*new_elem;
	void	*data;
	int		i;

	if (*strs == NULL || size == 0)
		return(NULL);
	i = 1;
	while (i <= size)
	{
		if (i == 1)
			begin_list = ft_create_elem;

		new_elem = ft_create_elem(data);
		new_elem->next = begin_list;
		begin_list = new_elem;
		i++;
	}
	return(begin_list);
}

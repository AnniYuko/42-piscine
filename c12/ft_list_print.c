/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:07:11 by akroll            #+#    #+#             */
/*   Updated: 2022/02/18 09:07:11 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_print(t_list *begin_list)
{
	int	i;

	i = 0;
	if (begin_list == NULL)
		printf("List is empty\n");

	while (begin_list != NULL)
	{
		printf("elem %d (%p)\n", i, begin_list);

		#ifdef INT_DATA
		printf("\tdata: %d\n", *((int*)(begin_list->data)));
		#endif
		#ifdef STRS_DATA
		printf("\tdata: %s\n", *((char**)(begin_list->data)));
		#endif

		printf("\tnext: %p\n\n", begin_list->next);
		begin_list = begin_list->next;
		i++;
	}
}

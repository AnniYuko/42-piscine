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

//#include "ft_list.h"
//#include "liblist.a"
#include "ft_create_elem.c"
//#include "ft_list_size.c"
#include "ft_list_print.c"
#include "ft_list_reverse.c"

int main(void)
{
	t_list	**begin_list;
	t_list	*elem1;
	t_list	*other_elem;
	void	*data;
	int		i;

	i = 42;
	data = &i;
	elem1 = ft_create_elem(data);
	other_elem = ft_create_elem(data);
	elem1->next = other_elem;

	begin_list = &elem1;

	//printf("Currently %d element(s) in the list.\n", ft_list_size(*begin_list));
	ft_list_print(*begin_list);

	ft_list_reverse(begin_list);
	printf("--- after reversing list: ---\n");

	ft_list_print(*begin_list);

	return(0);
}

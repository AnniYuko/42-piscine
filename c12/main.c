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

int main(void)
{
	t_list	*begin_list;
	t_list	*elem1;
	t_list	*elem2;
	void	*data;
	int		ft;
	//int		size;
	//char	**strs;

	ft = 42;
	data = &ft;
	elem1 = ft_create_elem(data);
	elem2 = ft_create_elem(data);
	elem1->next = elem2;
	begin_list = elem1;

// ----- ft_list_push_strs ------------------
	//size = 2;
	//strs = malloc(sizeof(char*) * (size + 1));
	//strs[0] = "hi";
	//strs[1] = "hedgehog";
	//begin_list = ft_list_push_strs(size, strs);
	//ft_list_print(begin_list);

// ----- ft_list_size ------------------------
	//printf("Currently %d element(s) in the list.\n", ft_list_size(*begin_list));

// ----- ft_list_reverse ---------------------
	//ft_list_print(begin_list);
	//ft_list_reverse(begin_list);
	//printf("--- after reversing list: ---\n");
	ft_list_print(begin_list);

	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:45:06 by akroll            #+#    #+#             */
/*   Updated: 2022/02/12 20:45:06 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../c09/includes/ft.h"
#include "ft_create_elem.c"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	begin_list = &new_elem;
	}
}

// visualized example:
// https://pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0Atypedef%20struct%20s_list%20%7B%0A%20%20struct%20s_list%20*next%3B%0A%20%20void%20*data%3B%0A%7D%20t_list%3B%0A%0At_list%20*ft_create_elem%28void%20*data%29%0A%7B%0A%20%20%20%20t_list%20*elem%3B%0A%0A%20%20%20%20elem%20%3D%20malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20if%20%28elem%20%3D%3D%20NULL%29%0A%20%20%20%20%20%20%20%20return%28NULL%29%3B%0A%0A%20%20%20%20elem-%3Edata%20%3D%20data%3B%0A%20%20%20%20elem-%3Enext%20%3D%20NULL%3B%0A%20%20%20%20return%28elem%29%3B%0A%7D%0A%0A//modified%20version%3A%0Avoid%20%20%20%20ft_list_push_front_git%28t_list%20**begin_list,%20void%20*data%29%0A%7B%0A%20%20%20%20t_list%20%20%20%20*e%3B%0A%0A%20%20%20%20e%20%3D%20ft_create_elem%28data%29%3B%0A%20%20%20%20if%20%28*begin_list%29%0A%20%20%20%20%20%20%20%20e-%3Enext%20%3D%20*begin_list%3B%0A%20%20%20%20begin_list%20%3D%20%26e%3B%0A%7D%0A%0Avoid%20%20%20%20ft_list_push_front%28t_list%20**begin_list,%20void%20*data%29%0A%7B%0A%20%20%20%20t_list%20*new_elem%3B%0A%0A%20%20%20%20if%20%28*begin_list%20%3D%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20*begin_list%20%3D%20ft_create_elem%28data%29%3B%0A%20%20%20%20%7D%0A%20%20%20%20else%0A%20%20%20%20%7B%0A%20%20%20%20new_elem%20%3D%20ft_create_elem%28data%29%3B%0A%20%20%20%20new_elem-%3Enext%20%3D%20*begin_list%3B%0A%20%20%20%20begin_list%20%3D%20%26new_elem%3B%0A%20%20%20%20%7D%0A%7D%0A%0Aint%20main%28void%29%0A%7B%0A%20%20t_list%20*elem1%3B%0A%20%20t_list%20*elem2%3B%0A%20%20t_list%20**begin_list%3B%0A%20%20void%20*data%3B%0A%20%20%0A%20%20elem1%20%3D%20malloc%28sizeof%28t_list%29%29%3B%0A%20%20elem1-%3Enext%20%3D%20NULL%3B%0A%0A%20%20begin_list%20%3D%20%26elem1%3B%0A%20%20%0A%20%20elem2%20%3D%20malloc%28sizeof%28t_list%29%29%3B%0A%20%20elem1-%3Enext%20%3D%20elem2%3B%0A%20%20%0A%20%20//ft_list_push_front_git%28begin_list,%20data%29%3B%0A%20%20ft_list_push_front%28begin_list,%20data%29%3B%0A%20%20%0A%20%20return%280%29%3B%0A%7D&cumulative=true&curInstr=19&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D&textReferences=false

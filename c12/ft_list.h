/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:29:34 by akroll            #+#    #+#             */
/*   Updated: 2022/02/10 16:29:34 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H
#include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

void	ft_list_push_front(t_list **begin_list, void *data);
t_list *ft_create_elem(void *data);
int	ft_list_size(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *data);

#endif

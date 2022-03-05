/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:10:43 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 20:10:43 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
#define FT_BTREE_H

#include <stdio.h>

typedef struct s_btree{
	void	*item;
	struct s_btree *left;
	struct s_btree *right;
}t_btree;

typedef enum bool{
	FALSE,
	TRUE
}t_bool;

t_btree	*btree_create_node(void *item);

#endif

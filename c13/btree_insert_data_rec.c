/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data_rec.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 23:25:34 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 23:25:34 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
	add element item to sorted btree:
	lower elem on the left, higher on the right

	recursive version only efficient for smaller and balanced btrees
	(wenn Baumhöhe logarithmisch beschränkt)
*/

void	btree_insert_data_rec(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	//root is empty
	if (!(*root))
	{
		*root = btree_create_node(item);
	}
	else if ((*cmpf)(item, (*root)->item) < 0)
	{
		btree_insert_data_rec((*root)->left, item, cmpf);
	}
	else if ((*cmpf)(item, (*root)->item) > 0)
	{
		btree_insert_data_rec((*root)->right, item, cmpf);
	}
	else	//item is already in btree
		return;
}

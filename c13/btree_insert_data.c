/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:18:02 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 21:18:02 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

/*
	iterative version (for big and unbalanced trees)
	btree is sorted: lower elem on the left, higher on the right
*/

void	btree_insert_data_iter(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_bool	found;
	t_btree	*son;
	t_btree	*father;

	son = *root;
	found = FALSE;

	while ((son != NULL) && !found)
	{
		if (0 == (*cmpf)(son->item, item))
		{
			//if item already there, no elem is added (see definition of btree)
			found = TRUE;
		}
		else
		{
			father = son;
			if ((*cmpf)(item, son->item) < 0)
				son = son->left;
			else
				son = son->right;
		}
	}
	if (!found)		//create new node
	{
		son = btree_create_node(item);
		if (!(*root))		//tree was empty, return new root
			*root = son;
		else
			if ((*cmpf)(item, father->item) < 0)
				father->left = son;		//add son to the left
			else
				father->right = son;	//add son to the right
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:08:01 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 21:08:01 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

//traverse btree "inorder" (symmetrische Reihenfolge)

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	//tree empty? stop
	if (!root)
		return;

	//left subtree
	btree_apply_infix(root->left, applyf);

	//look at root
	(*applyf)(root->item);

	//right subtree
	btree_apply_infix(root->right, applyf);
}

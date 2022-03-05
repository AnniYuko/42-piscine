/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:34:34 by akroll            #+#    #+#             */
/*   Updated: 2022/03/05 20:34:34 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

//traverse btree "preorder" (Hauptreihenfolge)

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	//1. tree empty? stop
	if (!root)
		return;

	//2. look at root
	(*applyf)(root->item);

	//3. left subtree
	btree_apply_prefix(root->left, applyf);

	//4. right subtree
	btree_apply_prefix(root->right, applyf);
}

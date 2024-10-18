/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 07:42:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/18 08:44:59 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* infix traversal (in-order): go left, visit root node, then go right
*/

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	









// Inorder tree traversal without recursion or stack
/*
void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*curr;
	t_btree	*prev;

	curr = root;
	while (curr != NULL)
	{
	//if no left child, applyf for this node
		if (curr->left == NULL)
		{
			applyf(curr->item);
			curr = curr->right;
		}
		else
		{
		// find the inorder predecessor of curr
			prev = curr->left;
			while (prev->right != NULL && prev->right != curr)
				prev = prev->right;
			// make curr the right child of its inorder predecessor
			if (prev->right == NULL)
			{
				prev->right = curr;
				curr = curr->left;
			}
			else
			{
			//revert the changes made in tree structure
				prev->right = NULL;
				applyf(curr->item);
				curr = curr->right;
			}
		}
	}
}
*/

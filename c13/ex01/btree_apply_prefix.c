/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:28:37 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/20 08:41:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* prefix traversal (pre-order): visit root node, go left, go right
	1. Apply function to current node's item;
	2. Recursively apply to the left subtree;
	3. Recursively apply to the right subtree;
*/

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

/*
void	btree_clear(t_btree *root, void (*freef)(void *))
{
	if (root == NULL)
		return ;
	btree_clear(root->left, freef);
	btree_clear(root->right, freef);
	if (freef != NULL)
		freef(root->item);
	free(root);
}

#include <stdio.h>
void	btree_printf_node(void *item)
{
	printf("%s, ", (char *)item);
}

int	main(void)
{
	t_btree *node;
	node = btree_create_node("Root");
	node->left = btree_create_node("0-Left");
	node->right = btree_create_node("1-Right");
	node->left->left = btree_create_node("00-Left");
	node->left->right = btree_create_node("01-Right");

	printf("Prefix traversal: \n");
	btree_apply_prefix(node, btree_printf_node);
	printf("\n");

	btree_clear(node, NULL);
	return (0);
}
*/
// Morris Traversal for Prefix (PreOrder) without recursion, stack
//by modifying temporary the stucture of the tree
/*
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*curr = root;
	t_btree	*prev;

	while (curr != NULL)
	{
		if (curr->left == NULL)
		{
	//No left child, apply function to curr and move to the right
			applyf(curr->item);
			curr = curr->right;
		}
		else
		{
	//Find the in-order predecessor (rightmost node in the left subtree
			prev = curr->left;
			while (prev->right != NULL && prev->right != curr)
				prev = prev->right;

			if (prev->right == NULL)
			{
	//Create a temporary link between predecessor to the curr
				prev->right = curr;
	//Apply the function to the curr before moving to the left child
				applyf(curr->item);
				curr = curr->left;
			}
			else //(pre->right == curr)
	//Link is already created, so remove this temporary link and move right
			{
				prev->right = NULL;
				curr = curr->right;
			}
		}
	}
}*/

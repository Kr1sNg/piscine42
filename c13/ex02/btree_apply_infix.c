/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 07:42:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/20 08:08:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* infix traversal (in-order): go left, visit root node, then go right
*/

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
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
	printf("%i ,", *(int *)item);
}

int	main(void)
{
	t_btree *node;
	int	a = 5, b = 50, c = 51, d = 500, e = 501;
	node = btree_create_node(&a);
	node->left = btree_create_node(&b);
	node->right = btree_create_node(&c);
	node->left->left = btree_create_node(&d);
	node->left->right = btree_create_node(&e);

	printf("Infix traversal: \n");
	btree_apply_infix(node, btree_printf_node); 
	printf("\n");

	btree_clear(node, NULL);
	return (0);
}
*/
//Inorder tree traversal without recursion or stack
/* Morris traversal avoids recursion and stack usage by temporarily modifying
the tree to link nodes back to their predecessors
*/
/*
void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	t_btree	*curr;
	t_btree	*prev;

	curr = root;	//start from the root node
	while (curr != NULL)	//Traverse until there's no more to process
	{
		if (curr->left == NULL)	//There's no left subtree
		{
			applyf(curr->item);	//Process the current node
			curr = curr->right;	// Move to the right subtree
		}
		else	//There's a left subtree
		{
			prev = curr->left;	// Find the predecessor of curr
			while (prev->right != NULL && prev->right != curr)
				prev = prev->right;	// Rightmost node in the left subtree
			if (prev->right == NULL) //1st time visiting this node,
			{
				prev->right = curr;	//Create a temporary link of
											perdecessor back to curr.
				curr = curr->left;	//Move to the left subtree
			}
			else //(prev->right == curr) (Link already exists, second visit
			{
				prev->right = NULL;	// Remove temporary link
				applyf(curr->item);	//Process the current node
				curr = curr->right;	// Move to the right subtree
			}
		}
	}
}
*/

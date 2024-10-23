/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:44:50 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/23 16:02:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 	1. Base case: root==NULL -> no level.
	2. Recusive case: calculate bothe root->left and root->right subtree
	3. For each node (or root), return 1 (bcof current level)
				+ the maximum height of left and right subtrees.
*/

#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (root == NULL)
		return (0);
	left = btree_level_count(root->left);
	right = btree_level_count(root->right);
	if (left >= right)
		return (1 + left);
	else
		return (1 + right);
}

/*
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

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
void	ft_printf_node(void *item)
{
	printf("%i ,", *(int *)item);
}

int	main(void)
{
	t_btree	*root;
	int a = 5, b = 50, c = 51, d = 500, e = 5001;
	root = btree_create_node(&a);
	root->left = btree_create_node(&b);
	root->right = btree_create_node(&c);
	root->left->left = btree_create_node(&d);
	root->left->left->right = btree_create_node(&e);

	printf("Prefix traversal:\n");
	btree_apply_prefix(root, ft_printf_node);

	int x = btree_level_count(root);
	printf("\nLevels of tree: %i\n", x);

	btree_clear(root, NULL);
	return (0);
}*/

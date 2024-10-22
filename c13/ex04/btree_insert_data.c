/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:46:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/21 16:38:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function inserts new node into a btree based on a comparison
with its parental node.
	1. base case: if btree is empty, create new node
	2. recursive case: use comparison function to decide where to insert:
		- new node has smaller value than root: insert into the left subtree;
		- else: insert to the right subtree;
*/

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
								int (*cmpf)(void *, void *))
{
	if (*root == NULL)
		*root = btree_create_node(item);
	else if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

/*
#include <stdio.h>
#include <string.h>

int	cmpf(void *a, void *b)
{
	return (strcmp((char *)a, (char *)b));
}

void	ft_printf_btree(void *item)
{
	printf("%s ,", (char *)item);
}

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
	if (root == NULL);
		return ;
	btree_clear(root->left, freef);
	btree_clear(root->right, freef);
	if (freef != NULL)
		freef(root->item);
	free(root);
}

int	main(void)
{
	t_btree	*node = NULL;

	btree_insert_data(&node, "M", cmpf);
	btree_insert_data(&node, "Right-M", cmpf);
	btree_insert_data(&node, "Left-M", cmpf);
	btree_insert_data(&node, "Left-Left", cmpf);
	btree_insert_data(&node, "Left-Right", cmpf);
	btree_insert_data(&node, "Right-Right", cmpf);
	btree_insert_data(&node, "Right-Left", cmpf);

	printf("Prefix traversal:\n");
	btree_apply_prefix(node, ft_printf_btree);
	printf("\n");

	btree_clear(node, NULL);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 08:53:30 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/21 12:49:45 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Suffix traversal (Post-Order traversal): go left, go right, then visit root
*/

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

/*
#include <stdio.h>
void	ft_printf_tree(void *str)
{
	printf("%s ,", (char *)str);
}

void	ft_clear_tree(t_btree *root, void (*freef)(void *))
{
	if (root == NULL)
		return ;
	ft_clear_tree(root->left, freef);
	ft_clear_tree(root->right, freef);
	if (freef != NULL)
		freef(root->item);
	free(root);
}

int	main(void)
{
	t_btree *node = btree_create_node("Root");
	node->left = btree_create_node("Left");
	node->right = btree_create_node("Right");
	node->left->left = btree_create_node("Left-Left");
	node->left->right = btree_create_node("Left-Right");
	node->right->right = btree_create_node("Right-Right");

	btree_apply_suffix(node, ft_printf_tree);
	printf("\n");

	ft_clear_tree(node, NULL);
	return (0);
}
*/

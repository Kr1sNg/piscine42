/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 07:27:10 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/23 10:41:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function returns the first elem related to data ref
			using infix traversal: left, root, right.
	1. recursion check left subtree
	2. check current node (or root)
	3. recursion check right subtree
*/

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
								int (*cmpf)(void *, void *))
{
	void	*item;

	if (root == NULL)
		return (NULL);
	item = btree_search_item(root->left, data_ref, cmpf);
	if (item != NULL)
		return (item);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	return (btree_search_item(root->right, data_ref, cmpf));
}

/*
#include <string.h>
int	ft_strcmp(void *s1, void *s2)
{
	return (strcmp((char *)s1, (char *)s2));
}

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}

#include <stdio.h>
void	ft_printf_node(void *item)
{
	printf("%s ,", (char *)item);
}

void	btree_clear(t_btree *root, void (*freef)(void *))
{
	if (root == NULL)
		return ;
	btree_clear(root->left, freef);
	btree_clear(root->right, freef);
	if (freef != NULL)
		free(root->item);
	free(root);
}

int	main(void)
{
	void *data_ref = "0";
	void *result;
	t_btree	*root = btree_create_node("0");
	root->left = btree_create_node("A");
	root->left->left = btree_create_node("AA");
	root->left->right = btree_create_node("AB");
	root->right = btree_create_node("B");
	
	printf("Btree infix traversal:\n");
	btree_apply_infix(root, ft_printf_node);
	printf("\nSearched item:\n");
	result = btree_search_item(root, data_ref, ft_strcmp);
	printf("%s \n", (char *)result);
	
	btree_clear(root, NULL);
	return (0);
}
*/

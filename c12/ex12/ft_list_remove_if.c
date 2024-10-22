/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:21:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/22 19:44:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function removes all elems whose data is equal with data_ref
	1. initializing variables: curr (to run along the lis),
		prev (NULL and then hold previous node),
		temp (for temporarily storing removing node.
	2. Traverse the list and check if current node should be removed
	3. If yes:
		- free data,
		- update the list:
			- temp stores curr (to free after)
			- if prev == NULL, that means we are at the head of list
				we have to update the head to the next node 
			- if we are'nt at the head, update prev->next by curr->next
				to skip current node.
		- move to next node
		- remove node by free(temp)
	4. If Not:
		- just move previous to current node, and the current to the next
*/

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*prev;
	t_list	*temp;

	prev = NULL;
	curr = *begin_list;
	while (curr != NULL)
	{
		if (cmp(curr->data, data_ref) == 0)
		{
			if (free_fct != NULL)
				free_fct(curr->data);
			temp = curr;
			if (prev == NULL)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			curr = curr->next;
			free(temp);
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

/*
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (new_elem != NULL)
	{
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
}

int	ft_int_compare(void *data, void *ref)
{
	return (*(int *)data - *(int *)ref);
}

void	ft_free_int(void *data)
{
	free(data);
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		if (free_fct != NULL)
			free_fct(temp->data);
		free(temp);
	}
}

#include <stdio.h>

void	ft_printf_list(t_list *begin_list)
{
	t_list *curr = begin_list;
	while (curr != NULL)
	{
		printf("%i, ", *(int *)(curr->data));
		curr = curr->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list *list = NULL;
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));
	int *d = malloc(sizeof(int));
	int *e = malloc(sizeof(int));
	if (!a || !b || !c || !d || !e)
		return (1);
	int ref = 42;
	*a = 42, *b = 55, *c = 66 , *d = 42, *e = 99;
	ft_list_push_front(&list, a);
	ft_list_push_front(&list, b);
	ft_list_push_front(&list, c);
	ft_list_push_front(&list, d);
	ft_list_push_front(&list, e);
	
	ft_printf_list(list);

	ft_list_remove_if(&list, &ref, ft_int_compare, ft_free_int);
	ft_printf_list(list);

	ft_list_clear(list, ft_free_int);
	return (0);
}*/

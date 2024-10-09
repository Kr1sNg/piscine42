/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:29:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/09 13:41:06 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function adds new element to the end of the list
	1. create a new node with given value (& check if memory is allocated)
	2. check if the list is empty:
		if it is make the new node as begin_list and return
	3. Traverse until the last node (like ex03)
	4. Link the new node to the current last node
		by setting the last node'next pointer to the new node.
*/

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*current;

	new_elem = ft_create_elem(data);
	if (!new_elem)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = new_elem;
	}
	else
	{
		current = *begin_list;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_elem;
	}
}

/*
void ft_list_clear(t_list *begin_list)
{
	t_list *temp;
	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free(temp);
	}
}

#include <stdio.h>
int	main(void)
{
	t_list	*list = NULL;
	int	value1 = 42;
	int value2 = 24;
	int value3 = 75;
	int value4 = 99;

	ft_list_push_back(&list, &value1);
	ft_list_push_back(&list, &value2);
	ft_list_push_back(&list, &value3);
	ft_list_push_back(&list, &value4);

	t_list *current = list;
	int i = 0;
	while (current != NULL)
	{
		printf("Element %i is: %i\n", i, *(int *)(current->data));
		i++;
		current = current->next;
	}
	ft_list_clear(list);
	return (0);
}*/

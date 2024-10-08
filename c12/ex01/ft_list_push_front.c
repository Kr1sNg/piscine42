/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:43:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/08 20:29:05 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* This fonction to add new element to begin of the list
by updating the list's begin_list pointer.
	1. Create a new node with the given value
	2. Set the next pointer of the new node to the current begin of list
	3. Move the begin to point to the new node
	4. Return the new begin of the list
*/

#include "ft_list.h"

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

/*
#include <stdio.h>
int	main(void)
{
	t_list *list = NULL; // list include: next, data.
	int	value1 = 42;
	int value2 = 24;

	ft_list_push_front(&list, &value1);
	ft_list_push_front(&list, &value2);

//data of list (the begin of the list)
	printf("1st element: %i\n", *(int *)(list->data));
//data of the next element in the list (access through pointer next...
	printf("2nd element: %i\n", *(int *)(list->next->data));
	
	free(list->next);
	free(list);

	return (0);
}*/

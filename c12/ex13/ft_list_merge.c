/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 08:53:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/16 17:22:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function concatenates the list2 to the end of list 1.
	we should call it ft_list_concate()
	1. check if list 1 is NULL or not, then find the end of list 1.
	2. change the ending pointer of list 1 from NULL to begin_list2
	After this function, list 2 doesn't exist anymore,
		any connections to list2 from now on could damage the results.
		so we only need to show and clear list 1.
*/

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list1;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list1 = *begin_list1;
	while (list1->next != NULL)
	{
		list1 = list1->next;
	}
	list1->next = begin_list2;
}

/*
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (new != NULL)
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}

void	ft_list_clear(t_list *begin)
{
	t_list	*temp;

	while (begin != NULL)
	{
		temp = begin;
		begin = begin->next;
		free(temp);
	}
}

#include <stdio.h>
void	ft_printf_list_int(t_list *begin)
{
	t_list	*curr;

	curr = begin;
	while (curr != NULL)
	{
		printf("%i, ", *(int *)(curr->data));
		curr = curr->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*lista = NULL;
	t_list	*listb = NULL;
	
	int	a1 = 1, a2 = 3, a3 = 5;
	int	b1 = 2, b2 = 4, b3 = 6, b4 = 8;

	ft_list_push_front(&lista, &a1);
	ft_list_push_front(&lista, &a2);
	ft_list_push_front(&lista, &a3);
	ft_printf_list_int(lista);

	ft_list_push_front(&listb, &b1);
	ft_list_push_front(&listb, &b2);
	ft_list_push_front(&listb, &b3);
	ft_list_push_front(&listb, &b4);
	ft_printf_list_int(listb);

	printf("new lists:\n");
	ft_list_merge(&lista, listb);
	ft_printf_list_int(lista);

	ft_list_clear(lista);

	return(0);
}
*/

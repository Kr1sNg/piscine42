/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:55:38 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/17 15:37:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function concatenate and sort 2 sorted lists by ascending order.
*/

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*curr;

	if (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	curr = *begin_list1;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = begin_list2;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	void	*temp;
	int		onoff;

	if (*begin_list == NULL)
		return ;
	onoff = 0;
	while (onoff == 0)
	{
		onoff = 1;
		curr = *begin_list;
		while (curr->next != NULL)
		{
			if (cmp(curr->data, curr->next->data) > 0)
			{
				temp = curr->data;
				curr->data = curr->next->data;
				curr->next->data = temp;
				onoff = 0;
			}
			curr = curr->next;
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1,
								t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}

/*
void	ft_list_push_front(t_list **begin, void *data)
{
	t_list	*new;

	new = ft_create_elem(data);
	if (new != NULL)
	{
		new->next = *begin;
		*begin = new;
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

int	ft_cmp_int(void *a, void *b)
{
	return (*(int *)a - *(int *)b);
}

#include <stdio.h>
void	ft_printf_list_int(t_list *list)
{
	while (list != NULL)
	{
		printf("%i, ", *(int *)(list->data));
		list = list->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list  *lista = NULL;
    t_list  *listb = NULL;
    
    int a1 = 42, a2 = 133, a3 = -17;
    int b1 = 8, b2 = -1000, b3 = 99, b4 = 0;

    ft_list_push_front(&lista, &a1);
    ft_list_push_front(&lista, &a2);
    ft_list_push_front(&lista, &a3);
	ft_list_sort(&lista, ft_cmp_int);
    printf("Original: \n");
	ft_printf_list_int(lista);

    ft_list_push_front(&listb, &b1);
    ft_list_push_front(&listb, &b2);
    ft_list_push_front(&listb, &b3);
    ft_list_push_front(&listb, &b4);
	ft_list_sort(&listb, ft_cmp_int);
    ft_printf_list_int(listb);

    ft_sorted_list_merge(&lista, listb, ft_cmp_int);
	printf("New: \n");
	ft_printf_list_int(lista);

	ft_list_clear(lista);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:24:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/21 13:54:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* for sorting this list, we can easily swap the value inside each element
	instead of swap totaly two elements.
	*/

#include "ft_list.h"

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
	t_list *temp;

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
void	ft_printf_list(t_list *begin)
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
	t_list *list = NULL;
	int a = 42, b = 113, c = -17, d = 8, e = -1000, f = 0;
	ft_list_push_front(&list, &f);
	ft_list_push_front(&list, &e);
	ft_list_push_front(&list, &d);
	ft_list_push_front(&list, &c);
	ft_list_push_front(&list, &b);
	ft_list_push_front(&list, &a);
	ft_printf_list(list);

	ft_list_sort(&list, ft_cmp_int);
	printf("New list:\n");
	ft_printf_list(list);

	ft_list_clear(list);
	return (0);
}*/

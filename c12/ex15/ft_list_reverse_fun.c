/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:20:37 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/17 12:20:43 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_data(void **d1, void **d2)
{
	void	*temp;

	temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*begin;
	t_list	*end;
	t_list	*before_end;

	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	end = begin_list;
	while (end->next != NULL)
		end = end->next;
	begin = begin_list;
	while (begin != end && begin->next != end)
	{
		ft_swap_data(&(begin->data), &(end->data));
		begin = begin->next;
		before_end = begin_list;
		while (before_end->next != end)
			before_end = before_end->next;
		end = before_end;
	}
	if (begin->next == end)
		ft_swap_data(&(begin->data), &(end->data));
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

void	ft_list_clear(t_list *begin, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin != NULL)
	{
		temp = begin;
		begin = begin->next;
		if (free_fct != NULL)
			free_fct(temp->data);
		free(temp);
	}
}

int	main(void)
{
	t_list	*list = NULL;
	int a = 1, b = 2, c = 3, d = 4, e = 5;

	ft_list_push_front(&list, &a);
	ft_list_push_front(&list, &b);
	ft_list_push_front(&list, &c);
	ft_list_push_front(&list, &d);
	ft_list_push_front(&list, &e);

	printf ("Original:  ");
	ft_printf_list_int(list);

	ft_list_reverse_fun(list);

	printf("Reversed:  ");
	ft_printf_list_int(list);

	ft_list_clear(list, NULL);
	return (0);
}*/

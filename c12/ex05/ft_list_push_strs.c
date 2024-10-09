/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:52:03 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/09 19:49:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function creates a new list that includes all strings pointed by
	element in strs.
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*str_list;

	str_list = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_front(&str_list, strs[i]);
		i++;
	}
	return (str_list);
}

/*
void	ft_list_clear(t_list *begin_list)
{
	t_list	*temp;

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
	char *strs[] = {"Hello", "World", "Nguyen", "Tat", "Hoang"};
	int size = 5;
	int i = 0;

	t_list *list = ft_list_push_strs(size, strs);
	t_list *current = list;

	while (current != NULL)
	{
		printf("String %i: %s\n", i, (char *)current->data);
		i++;
		current = current->next;
	}

	ft_list_clear(list);
	return (0);
}
*/

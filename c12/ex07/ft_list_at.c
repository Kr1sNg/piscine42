/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:04:14 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/09 19:51:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*current;
	unsigned int	i;

	current = begin_list;
	i = 0;
	while (current != NULL && i < nbr)
	{
		current = current->next;
		i++;
	}
	return (current);
}

/*
void    ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *new_elem;

    new_elem = ft_create_elem(data);
    if (new_elem != NULL)
    {
        new_elem->next = *begin_list;
        *begin_list = new_elem;
    }
}

void    ft_list_clear(t_list *begin_list)
{
    t_list  *temp;

    while (begin_list != NULL)
    {
        temp = begin_list;
        begin_list = begin_list->next;
        free(temp);
    }
}

#include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    int value0 = 42;
    int value1 = 24;
    int value2 = 75;
	int	value3 = 99;
	int value4 = 100;
	int value5 = 800;
	int value6 = 999;


	ft_list_push_front(&list, &value0);
    ft_list_push_front(&list, &value1);
    ft_list_push_front(&list, &value2);
    ft_list_push_front(&list, &value3);
	ft_list_push_front(&list, &value4);
	ft_list_push_front(&list, &value5);
	ft_list_push_front(&list, &value6);

    t_list *current = ft_list_at(list, 4);
	if (current != NULL)
	{
		printf("value at 4: %i\n", *(int *)(current->data));
	}
	else
		printf("no element at index 4\n");
    ft_list_clear(list);

    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:58:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/08 22:15:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*this function returns the last element of the list.
*/

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*element;

	element = begin_list;
	if (element == NULL)
		return (NULL);
	while (element->next != NULL)
	{
		element = element->next;
	}
	return (element);
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

void    ft_list_clear(t_list **begin_list)
{
    t_list  *temp;

    while (*begin_list != NULL)
    {
        temp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(temp);
    }
}

#include <stdio.h>
int main(void)
{
    t_list *list = NULL;
    int value1 = 42;
    int value2 = 24;
    int value3 = 75;

    ft_list_push_front(&list, &value1);
    ft_list_push_front(&list, &value2);
    ft_list_push_front(&list, &value3);

    t_list *last = ft_list_last(list);
	if (last != NULL)
		printf("last value: %i\n", *(int *)(last->data));
	else
		printf("The list is empty.\n");
    
	ft_list_clear(&list);

    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:00:33 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/09 13:39:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this function returns the number of elements in the list.
*/

#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int		i;
	t_list	*element;

	element = begin_list;
	i = 0;
	while (element != NULL)
	{
		i++;
		element = element->next;
	}
	return (i);
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
int main(void)
{
    t_list *list = NULL;
    int value1 = 42;
    int value2 = 24;
	int	value3 = 75;

    ft_list_push_front(&list, &value1);
    ft_list_push_front(&list, &value2);
	ft_list_push_front(&list, &value3);

	printf("size: %i\n", ft_list_size(list));

    ft_list_clear(list);

    return (0);
}*/

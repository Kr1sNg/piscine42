/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:34:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/16 18:31:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*curr;

	curr = begin_list;
	while (curr != NULL)
	{
		(*f)(curr->data);
		curr = curr->next;
	}
}

/*
#include <unistd.h>
//have to change int nbr to void ptr of data
void	ft_putnbr(void *nbr_ptr)
{
	long	nb = *(int *)nbr_ptr; // Dereference void ptr to get int value 
	char	c;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		int	next_nb = nb / 10;
		ft_putnbr(&next_nb);
		next_nb = nb % 10;
		ft_putnbr(&next_nb);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

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

void    ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
    t_list  *temp;

    while (begin_list != NULL)
    {
        temp = begin_list;
        begin_list = begin_list->next;
		if (free_fct != NULL)
			free_fct(temp->data);
        free(temp);
	}
}

#include <stdio.h>
int	main(void)
{
	t_list	*elem = NULL;
	int	*value1 = malloc(sizeof(int));
	int *value2 = malloc(sizeof(int));
	int *value3 = malloc(sizeof(int));
	if (!value1 || !value2 || !value3)
		return (1);

	*value1 = 42;
	*value2 = 55;
	*value3 = 79;

	ft_list_push_front(&elem, value1);
	ft_list_push_front(&elem, value2);
	ft_list_push_front(&elem, value3);

	ft_list_foreach(elem, &ft_putnbr);
	
	ft_list_clear(elem, free);

	return (0);
}*/

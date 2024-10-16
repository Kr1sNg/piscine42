/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:57:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/15 08:46:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function reverses the order of a list's elements
	Objective is change the pointer of curr->next from next to prev!!!
    1. Initialize 3 pointers prev as NULL, curr as begin and next as NULL;
    2. iterate through the list. Inside the loop:
        - store next node, next = curr->next
        - update next pointer to prev, curr->next = prev
        - update prev as curr and curr as next, prev = curr and curr = next;
    3. update begin_list with prev;
*/

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	prev = NULL;
	curr = *begin_list;
	next = NULL;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}

/*
#include <stdio.h>
void ft_print_list(t_list *elem)
{
    while (elem != NULL)
    {
        printf(" %i,", *(int *)(elem->data));
        elem = elem->next;
    }
}

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		if (free_fct != NULL)
			free_fct(temp->data);
		free(temp);
	}
}

int main(void)
{
    int *val1 = malloc(sizeof(int));
    int *val2 = malloc(sizeof(int));
    int *val3 = malloc(sizeof(int));
    int *val4 = malloc(sizeof(int));
    int *val5 = malloc(sizeof(int));
    
    if (!val1 || !val2 || !val3 || !val4 || !val5)
        return 1;

    *val1 = 1;
    *val2 = 2;
    *val3 = 3;
    *val4 = 4;
    *val5 = 5;
    
    t_list *head = ft_create_elem(val1);
    head->next = ft_create_elem(val2);
    head->next->next = ft_create_elem(val3);
    head->next->next->next = ft_create_elem(val4);
    head->next->next->next->next = ft_create_elem(val5);

    printf("Given Linked list:");
    ft_print_list(head);

    ft_list_reverse(&head);
    printf("\nReversed Linked list:");
    ft_print_list(head);
	printf("\n");
    
    ft_list_clear(head, free);
    return (0);
}*/

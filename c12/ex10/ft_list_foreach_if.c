/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:26:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/13 10:04:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)())
{
	t_list	*curr;

	curr = begin_list;
	while (curr != NULL)
	{
		if (cmp(curr->data, data_ref) == 0)
			f(curr->data);
		curr = curr->next;
	}
}

/*
#include <unistd.h>

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

void	ft_putstr(void *data)
{
	char *str = (char *)data;
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(void *list_data, void *data_ref)
{
	char *s1 = (char *)list_data;
	char *s2 = (char *)data_ref;
	int i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		{
			++i;
		}
	return (s1[i] - s2[i]);
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

int	main(void)
{
	t_list *list = NULL;
	char *str1 = "montpellier";
	char *str2 = "nice";
	char *str3 = "perpignan";
	char *str4 = "monaco";

	ft_list_push_front(&list, str1);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	ft_list_push_front(&list, str4);

	char *ref = "perpignan";

	ft_list_foreach_if(list, ft_putstr, ref, ft_strcmp);

	ft_list_clear(list);

	return (0);
}*/

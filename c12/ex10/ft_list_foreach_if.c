/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:26:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/11 21:27:19 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
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



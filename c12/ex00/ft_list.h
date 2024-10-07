/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:52:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/07 17:58:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Defines a structure (kind s_list) named t_list with 2 nembers:
data: to hold data and next: pointer to the next element in the list.
Void pointer (void *data) can hold an address of any type
and it can be typecasted to any type (with example *(*int)data)
*/

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

#endif

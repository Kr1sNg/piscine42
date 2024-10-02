/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:34:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 14:49:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// typedef is used to define an alias for the already existing datatype.
//check if ft_boolean_h has been defined or not
//if not the code between define and endif will be included.

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) ((nbr % 2) == 0)
# define TRUE (0)
# define FALSE (1)

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS (0)

#endif 
//end of define

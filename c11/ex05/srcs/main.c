/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:26:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/06 12:59:43 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* init_functions is a function to assign function pointer to the array.*/

#include "../includes/ft_op.h"

void	init_functions(void (**ft_doop)(int, int))
{
	ft_doop[0] = ft_add;
	ft_doop[1] = ft_subtract;
	ft_doop[2] = ft_multiply;
	ft_doop[3] = ft_divine;
	ft_doop[4] = ft_modulo;
}

int	main(int argc, char *argv[])
{
	int		c;
	void	(*ft_doop[5])(int, int);

	init_functions(ft_doop);
	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		c = 0;
	else if (ft_strcmp(argv[2], "-") == 0)
		c = 1;
	else if (ft_strcmp(argv[2], "*") == 0)
		c = 2;
	else if (ft_strcmp(argv[2], "/") == 0)
		c = 3;
	else if (ft_strcmp(argv[2], "%") == 0)
		c = 4;
	else
	{
		ft_putstr("0\n");
		return (0);
	}
	(*ft_doop[c])(ft_atoi(argv[1]), ft_atoi(argv[3]));
	ft_putstr("\n");
	return (0);
}

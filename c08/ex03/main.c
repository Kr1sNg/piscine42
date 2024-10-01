/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:01:11 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/17 17:11:58 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point point;
       	point.x = 5;
	point.y = 6;
   	printf("1x: %i\ny: %i\n", point.x, point.y);

	set_point(&point);

	printf("x: %i\ny: %i\n", point.x, point.y);
	return (0);
}

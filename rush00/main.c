/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 07:56:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 20:40:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	rush(int x, int y);
int	ft_atoi(char *ch);

int	main(int argc, char **argv)
{
	int		x;
	int		y;

	if (argc != 3)
	{
		write(1, "Error", 5);
		return (1);
	}
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}

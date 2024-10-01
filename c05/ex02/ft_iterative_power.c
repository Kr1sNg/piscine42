/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:26:48 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/11 16:52:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 1));
	return (0);
}*/

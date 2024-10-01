/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 21:00:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/19 12:07:52 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb = ft_find_next_prime(nb + 1);
			break ;
		}
		i++;
	}
	return (nb);
}
/*
int	main(void)
{
	int x = ft_find_next_prime(9);
	printf("%i", x);
}*/

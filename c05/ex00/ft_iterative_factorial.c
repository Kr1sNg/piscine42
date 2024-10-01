/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:12:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/11 17:50:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		i = 1;
		result = 1;
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
}
/*
int	ft_atoi(char *str)
{
	int	neg;
	int	i;
	int	result;

	result = 0;
	neg = 1;
	i = 0;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}


int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int	a;
	
	a = ft_atoi(argv[1]);

	printf("%i\n", ft_iterative_factorial(a));
}*/

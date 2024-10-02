/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:50:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/16 10:14:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	nb;
	int	i;
	int	*range;

	if (min > max || min == max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof (int));
	if (range == 0)
		return (NULL);
	nb = min;
	i = 0;
	while (nb < max)
	{
		range[i] = nb;
		nb++;
		i++;
	}
	return (range);
}
/*
void	ft_putnbr(int nbr)
{
	long	nb;
	char	c;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;
	
	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	int	*range;
	int	i;
	int	min;
	int	max;

	if (argc != 3)
	       return (0);	
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);

	if (max < min || max == min)
		return (0);
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		ft_putnbr(range[i]);
		write(1, ", ", 2);
		i++;
	}
	free(range);
	return (0);
}*/

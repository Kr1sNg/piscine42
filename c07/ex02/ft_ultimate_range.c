/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:46:49 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/14 22:48:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	nb;

	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc (size * (sizeof(int)));
	if (*range == NULL)
		return (-1);
	nb = min;
	i = 0;
	while (nb < max)
	{
		(*range)[i] = nb;
		nb++;
		i++;
	}
	return (size);
}
/*
void	ft_putchar(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long nb = nbr;
	char c;
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
		write (1, &c, 1);
	}
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	
	while (str[i] == '-')
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
	if (argc != 3)
		return (1);
	int min = ft_atoi(argv[1]);
	int max = ft_atoi(argv[2]);

	if (min >= max)
		return (2);
	int *arr;
	int size;
	int i = 0;

	size = ft_ultimate_range(&arr, min, max);
	if (size == 0)
		ft_putchar("No array");
	else if (size > 0)
	{
		while (i < size)
		{
			ft_putnbr(arr[i]);
			write (1, ", ", 2);
			i++;
		}
		write (1, "size: ", 6);
		ft_putnbr(size);
		write (1, "\n", 1);
		free(arr);
	}
	else
		write(1, "No memory", 9);
	return (0);
}*/	

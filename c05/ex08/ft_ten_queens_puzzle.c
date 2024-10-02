/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:57:31 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 12:48:04 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

int	ft_check(int tab[10], int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (tab[i] == row || (tab[i] - i) == (row - col)
			|| (tab[i] + i) == (row + col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_recursion(int tab[10], int col, int *count)
{
	int	row;
	int	i;

	if (col == 10)
	{
		i = 0;
		while (i < 10)
		{
			ft_putchar(tab[i]);
			i++;
		}
		write(1, "\n", 1);
		(*count)++;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_check(tab, col, row) != 0)
		{
			tab[col] = row;
			ft_recursion(tab, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	count;
	int	col;

	col = 0;
	count = 0;
	ft_recursion(tab, col, &count);
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	int x;
	x = ft_ten_queens_puzzle();
	printf("%i\n", x);
}*/

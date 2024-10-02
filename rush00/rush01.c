/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 08:16:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 16:06:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int x, char b, char m, char e)
	//nb of character with the char in the begin - middle - end
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar(b);
		else if (a == x)
			ft_putchar(e);
		else
			ft_putchar(m);
		a++;
	}
}

void	print_block(int x, int y)
	//x: nb of character in one line, y: nb of line
{
	int	b;

	b = 1;
	while (b <= y)
	{
		if (b == 1)
			print_row(x, '/', '*', '\\');
		else if (b == y)
			print_row(x, '\\', '*', '/');
		else
			print_row(x, '*', ' ', '*');
		b++;
		write(1, "\n", 1);
	}
}

int	rush(int x, int y)
{
	if (x < 0 || y < 0)
		return (0);
	else
		print_block(x, y);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:25:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/08 16:00:39 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2(int nb)
{
	char	c;
	char	a;
	char	b;

	if (nb <= 9)
	{
		c = nb + '0';
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		a = (nb / 10) + '0';
		b = (nb % 10) + '0';
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

void	print_4(int a, int b)
{
	print_2(a);
	write(1, " ", 1);
	print_2(b);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			print_4(a, b);
			b++;
		}
		a++;
	}
}
/*
int	main (void)
{
	ft_print_comb2();
	return (0);
}
*/

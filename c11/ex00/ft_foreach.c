/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:12:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/16 19:54:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}


//(*f)(tab[i]) is the same with f(tab[i])
/*#include <unistd.h>
void	ft_putnbr(int nbr)
{
	char	c;
	long	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
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

int main(void)
{
	int		tab[5] = {1, 5, 12, 999, 2345678};
	ft_foreach(tab, 5, &ft_putnbr);
}*/

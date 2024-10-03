/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:37:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/03 19:15:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int	*tab, int length, int (*f)(int))
{
	int		i;
	int		*arr;

	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

/*#include <unistd.h>

int		ft_double(int nb)
{
	return (nb * 2);
}

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
	int		*arr;
	int		i = 0;

	arr = ft_map(tab, 5, &ft_double);
	while (i < 5)
	{
		ft_putnbr(arr[i]);
		write(1, "\n", 1);
		i++;
	}
	free(arr);
}*/

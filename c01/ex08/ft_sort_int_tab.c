/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 21:08:53 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 11:44:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	count;

	count = 1;
	if (size <= 1)
		return ;
	while (count == 1)
	{
		count = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				count = 1;
			}
			i++;
		}
	}
}
/*
int	main(void)
{
	int	array[] = {5, -18, 90, -18, -18, -200};
	int	i = 0;
	printf("array before:");
	while	(i < 5)
	{
		printf("%i, ", array[i]);
		i++;
	}

	ft_sort_int_tab(array, 6);
	printf("\n");
	printf("array after:");
	int	j = 0;
	while	(j < 6)
	{
		printf("%i, ", array[j]);
		j++;
	}
	return 0;
}*/

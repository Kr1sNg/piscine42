/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:59:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/04 16:36:47 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		asc;
	int		desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab [i], tab [i + 1]) < 0)
			desc = 0;
		if (f(tab [i], tab [i + 1]) > 0)
			asc = 0;
		i++;
	}
	if (asc == 1 || desc == 1)
		return (1);
	return (0);
}

/*
with sorting, we have to check both ascending and descending ways,
even when all elements are equal, it's also sorted.

int ft_compare(int ns, int nb)
{
	return (ns - nb);
}

#include <stdio.h>
int	main(void)
{
	int tab [5] = {91, 91, 91, 91, 91};
	int x = ft_is_sort(tab, 5, &ft_compare);
	printf("%i\n", x);
}*/

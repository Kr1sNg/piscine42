/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:17:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/03 20:10:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*
int	ft_numeric(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int x;
	char *tab[3];
	tab[0] = "123";
	tab[1] = "456778";
	tab[2] = NULL;
	x = ft_any(tab, &ft_numeric);
	printf("%i\n", x);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:30:41 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/04 10:57:48 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
int ft_numeric(char *str)
{
    int i = 0;
	if (str[i] == '\0')
		return (1);
    while (str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return (1);
        i++;
    }
    return (0);
}

#include <stdio.h>
int main(void)
{
    int x;
    char *tab[3];
    tab[0] = "";
    tab[1] = "";
    tab[2] = "";
    x = ft_count_if(tab, 3, &ft_numeric);
    printf("%i\n", x);
}*/

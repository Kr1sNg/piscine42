/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:56:24 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/06 19:24:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strswap(char **s1, char **s2)
{
	char	*memo;

	memo = *s1;
	*s1 = *s2;
	*s2 = memo;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		onoff;

	onoff = 0;
	while (onoff == 0)
	{
		i = 0;
		onoff = 1;
		while (tab[i] != NULL && tab[i + 1] != NULL)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_strswap(&tab[i], &tab[i + 1]);
				onoff = 0;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_sort_string_tab(&argv[1]); //NOTE: sorting from argv[1]
									//because argv[0] is prog name
		int i = 1;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}*/

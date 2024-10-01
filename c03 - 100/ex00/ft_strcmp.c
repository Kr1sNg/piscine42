/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:01:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/09 11:14:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	value = s1[i] - s2[i];
	return (value);
}
/*
int	main(void)
{
	char s[100] = "k2per";
	char t[100] = ""; //s < t
	printf("%i\n", strcmp(s, t)); //+1
	
	printf("%i", ft_strcmp(s, t));
}*/

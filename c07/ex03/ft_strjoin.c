/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:09:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 12:49:58 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + ft_strlen(sep) * (size - 1);
	return (length);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	len;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strfinal;
	int		n;

	if (size == 0)
	{
		strfinal = malloc(1);
		strfinal[0] = '\0';
		return (strfinal);
	}
	strfinal = malloc(ft_lenstrs(size, strs, sep) + 1);
	if (strfinal == NULL)
		return (0);
	strfinal[0] = '\0';
	n = 0;
	while (n < size)
	{
		ft_strcat(strfinal, strs[n]);
		if (n < size - 1)
			ft_strcat(strfinal, sep);
		n++;
	}
	return (strfinal);
}
/*
#include <stdio.h>
int	main()
{
	char	*strs[5];
	strs[0] = "Hello";
	strs[1] = "Hi";
	strs[2] = "";
	strs[3] = "Salut";
	strs[4] = "Coucou";
	char	*sep = ", ";
	char	*new = ft_strjoin(5, strs, sep);
	printf("%s\n", new);
	free(new);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:25:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/20 23:27:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>

int	space_check(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}


int	count_words(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (space_check(str[i]) == 1)
			i++;
		if (space_check(str[i]) == 0)
		{
			count++;
			while(space_check(str[i]) == 0)
				i++;
		}
		i++;
	}
	return (count);
}

int	count_letter(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (space_check(str[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strcat(char *str)
{
	char	*arr;
	int	i;
	
	arr = malloc(sizeof(char) * (count_letter(str) + 1);
	i = 0;
	while ((str[i] != '\0') && space_check(str[i]) == 0))
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}


char	**ft_split(char *str)
{
	int	i;
	char	**arrs;
	*arrs = malloc(sizeof(char *) * (count_words(str) + 1));
	if (*arrs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (space_check(str[i]) == 1)
			i++;
		if (space_check(str[i]) == 0)
		{
			arrs[j] = ft_strcat(str);
			j++;
			while (space_check(str[i]) == 0)
				i++;
		}
		i++;
	}
	arrs[j] = '\0';
	return (arrs);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	char **arrs;
	char *str = " Hello, The New\t  WOR\nLD  ! ";
	
	arrs = ft_split(str);
	printf("%s\n", arrs[0]);

	free(arrs);
}
			
	 





#include <stdio.h>

int	main(void)
{
	char *str = "There are four words . ";
	printf("%d\n", count_words(str));
	printf("%i", count_letter(str));
}


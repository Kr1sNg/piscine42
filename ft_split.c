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
		while (str[i] != '\0' && space_check(str[i]) == 1)
			i++;
		if (str[i] != '\0' && space_check(str[i]) == 0)
		{
			count++;
			while(str[i] != '\0' && space_check(str[i]) == 0)
				i++;
		}
	}
	return (count);
}

int	count_letter(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != 0 && space_check(str[i]) == 0)
    {
        count++;
		i++;
	}
	return (count);
}

char	*ft_strcat(char *src)
{
	char	*arr;
	int	    i;
    int     len;
    
    len = count_letter(src);
	arr = malloc(sizeof(char) * (len + 1));
    if (arr == NULL)
        return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}


char	**ft_split(char *str)
{
	int    i;
    	int    j;
	char	**arrs;
	arrs = malloc(sizeof(char *) * (count_words(str) + 1));
	if (arrs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && space_check(str[i]) == 1)
			i++;
		if (space_check(str[i]) == 0 && str[i] != '\0')
		{
			arrs[j] = ft_strcat(str + i);
			j++;
			while (space_check(str[i]) == 0 && str[i] != '\0')
				i++;
		}
	}
	arrs[j] = NULL;
	return (arrs);
}

#include <stdio.h>

int	main(void)
{
    char **arrs;
    char *str = " Hello, The New\t  WOR\nLD  ! ";
    int     i = 0;
    arrs = ft_split(str);
    if (arrs == NULL)
        return (1);
    while (arrs[i] != NULL)
    {
        printf("%s\n", arrs[i]);
        free(arrs[i]);
        i++;
    }
    free(arrs);
    return (0);
}



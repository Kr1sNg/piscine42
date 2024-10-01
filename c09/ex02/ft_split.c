/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:29:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/23 13:40:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while ((str[i] != '\0') && (check_charset(str[i], charset) == 1))
			i++;
		if ((str[i] != '\0') && (check_charset(str[i], charset) == 0))
		{
			count++;
			while (str[i] != '\0' && check_charset(str[i], charset) == 0)
				i++;
		}
	}
	return (count);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while ((str[i] != '\0') && (check_charset(str[i], charset) == 0))
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	len = ft_strlen(src, charset);
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**arrs;

	i = 0;
	j = 0;
	arrs = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!arrs)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_charset(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && check_charset(str[i], charset) == 0)
		{
			arrs[j] = ft_strdup(str + i, charset);
			j++;
			while (str[i] != '\0' && check_charset(str[i], charset) == 0)
				i++;
		}
	}
	arrs[j] = NULL;
	return (arrs);
}
/*
#include <stdio.h>
int	main(void)
{
	char **arrs;
	char *str = " Hello... The,New - = +  Future.e ! ";
	char *charset = "  ,. ";
	int i = 0;
	arrs = ft_split(str, charset);
	if (!arrs)
		return (1);
	while (arrs[i] != NULL)
	{
		printf("%s\n", arrs[i]);
		free(arrs[i]);
		i++;
	}
	free(arrs);
	return (0);
}*/

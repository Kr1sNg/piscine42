/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:32:37 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/24 19:26:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* it finds the first appearance of to_find in str (not include nul)
	return new str which starts from to_find to the end of str
	or str if to_find is empty.
	or nul if there's nothing be found.
*/

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	i;

	s = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s] != '\0')
	{
		while (str[s + i] == to_find[i] && str[s + i] != '\0')
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (str + s);
		s++;
		i = 0;
	}
	return (0);
}

int	main(void)
{
	char str[] = "Bonjour et bienvenu dans ce jeu tant attendu..";
	char to_find[] = "venu";

	printf("real: %s\n", strstr(str, to_find));
	printf("fake: %s\n", ft_strstr(str, to_find));
}


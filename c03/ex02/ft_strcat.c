/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:57:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/09 11:06:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
/* it adds the src to dest by overwriting the nul in dest and then add another 
nul after finishing */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_len;

	d_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest1[] = "Today is Monday, ";
	char src[] = "it's a beautiful day.";
	printf("real: %s\n", strcat (dest1, src));
	char dest2[] = "today is monday, ";
	printf("fake: %s\n", ft_strcat(dest2, src));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:24:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/09 11:12:05 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
// similar with strcat except that it will add n byte to dest and 1 byte of nul
// after finishing

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_len;

	d_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
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
	char dest1[] = "It's already afternoon. ";
	char src[] = "He need a tea break. ";

	printf("real: %s\n", strncat(dest1, src, 5));

	char dest2[] = "It's already afternoon. ";
	printf("fake: %s\n", ft_strncat(dest2, src, 5));
}*/

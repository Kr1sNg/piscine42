/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 10:37:10 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/08 15:53:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "jdfslkafjadkj";
	char dest[40] = "Day la dich";

	char *rst = ft_strncpy(dest, src, 30);

	printf("fake: %s\n", dest);
	printf("fake2: %s\n", rst);

	char *real = strncpy(dest, src, 30);

	printf("real: %s\n", dest);
	printf("real2: %s\n", real);
}*/

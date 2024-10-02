/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 09:32:58 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/08 13:39:52 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <string.h>
#include <stdio.h>
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[18] = "This is the source";
	char	dest[100];
	
	// ft-strcpy gives the result of string dest
	// so that why we can printf directly retur or prinf dest
	// they will give the same value,
	
	char *retur = ft_strcpy(dest, src);
	printf("fake2. %s\n", retur);
	
	char *real = strcpy(dest, src);
	printf("real1. %s\n", dest);
	printf("real2. %s\n", real);

	return 0;
}*/

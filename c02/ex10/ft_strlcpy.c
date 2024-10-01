/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 08:27:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 11:48:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <unistd.h>
//#include <stdio.h>

int	ft_sizestr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lensrc;

	i = 0;
	lensrc = ft_sizestr(src);
	if (size == 0)
		return (lensrc);
	else
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (lensrc);
	}
}
/*
int	main(void)
{
	char src[] = "Nguon."; //6
	char dest[] = "hello";
	unsigned int i = ft_strlcpy(dest, src, 10);
	printf("new dest: %s\n", dest);
	printf("len of src %i", i);
	char src2[] = "Nguon."; //6
	char dest2[] = "hello";
	unsigned int i2 = strlcpy(dest2, src2, 10);
	printf("2new dest: %s\n", dest);
	printf("2len of src %i", i2);



	return (0);
}*/

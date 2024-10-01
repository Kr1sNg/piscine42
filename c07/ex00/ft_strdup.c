/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:07:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/13 11:49:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* this function returns a pointer to a new str which is a duplicate of src.
 * memory of new str is obtained w malloc, and must be freed after using.
 * it return NULL if machine doesnt have enough memory.
 * with <strdup>, we dont need to care about how much memory we need to copy,
 * 	we ask malloc for dynamic memory allocation.
 * with <strcpy> we have to provide the memory into which the function copy str,
 * 	and we have to find how much memory we need.
*/
#include <stdlib.h>
//#include <unistd.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src) + 1);
	if (dest == 0)
		return (0);
	dest = ft_strcpy(dest, src);
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	char *dup;

	dup = ft_strdup(argv[1]);
	ft_putstr(dup);
	free(dup);
	return (0);
}*/

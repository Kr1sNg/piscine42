/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:28:02 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/10 13:52:19 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return the length of new dest which is the length of dest+scr OR
//	size+src (in case size < dest)
// we use to appends src to dest with the max of new dest is = (size-1)+1 nul.
// to use "real" strlcat, must include bsd/string.h and cc with -lbsd

//#include <stdio.h>
//#include <bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] != 0 && d_len + i < size - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}
/*
int	main(void)
{
	char src[] = "This is the source";//27
	char dest1[50] = "Destination";//8
	printf("real: %zu\n", strlcat(dest1, src, 100));
	printf("real: %s\n", dest1);

        char dest2[50] = "Destination";//8
        printf("fake: %i\n", ft_strlcat(dest2, src, 100));
        printf("fake: %s\n", dest2);
	
}*/

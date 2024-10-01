/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:17:22 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 21:26:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
/*
char	*printstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	return (str);
}

int	main(void)
{
	char str[] = "HELLO mOi nG!!!!";
	printstr(ft_strlowcase(str));
	return (0);
}*/

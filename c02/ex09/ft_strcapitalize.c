/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:58:17 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/08 16:29:29 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_alphabet(char x)
{
	if (('0' <= x && x <= '9') || ('A' <= x && x <= 'Z')
		|| ('a' <= x && x <= 'z'))
		return (1);
	else
		return (0);
}

char	ft_char_majus(char x)
{
	if ('a' <= x && x <= 'z')
		x = x - 32;
	return (x);
}

char	ft_char_minus(char x)
{
	if ('A' <= x && x <= 'Z')
		x = x + 32;
	return (x);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_alphabet(str[i - 1]) == 0)
			str[i] = ft_char_majus(str[i]);
		if (ft_alphabet(str[i - 1]) == 1)
			str[i] = ft_char_minus(str[i]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quaRante-dEUx; cinquante+et+un";
	ft_strcapitalize(str);
	
	int i = 0;
	while (str[i])
	{
		write( 1, &str[i], 1);
		i++;
	}	
	return (0);
}*/

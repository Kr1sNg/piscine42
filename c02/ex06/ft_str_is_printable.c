/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:12:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/08 16:14:00 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str < 32 || *str > 126)
			i++;
		str++;
	}
	if (i > 0)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("%i", ft_str_is_printable("tai/\0  i\\a saoay$#@$%"));
	return (0);
}*/

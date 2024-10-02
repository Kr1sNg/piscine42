/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:01:53 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 20:10:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if ((*str < 'A') || (*str > 'Z'))
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
	printf("%i", ft_str_is_uppercase(""));
	return (0);
}*/

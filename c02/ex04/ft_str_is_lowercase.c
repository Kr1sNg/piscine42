/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:15:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 19:58:05 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if ((*str < 'a') || (*str > 'z'))
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
	printf("%i", ft_str_is_lowercase(""));
	return (0);
}*/

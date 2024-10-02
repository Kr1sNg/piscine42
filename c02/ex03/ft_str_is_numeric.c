/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:03:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 19:14:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	printf("%i", ft_str_is_numeric(""));
	return (0);
}
*/

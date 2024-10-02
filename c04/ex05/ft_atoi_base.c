/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:22:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 12:47:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] > 8 && base[i] < 14))
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	sign;
	int	i;
	int	len;

	len = ft_strlen(base);
	i = 0;
	nb = 0;
	sign = 1;
	if (ft_base_check(base) == 1)
		return (0);
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_value(str[i], base) >= 0)
	{
		nb = (nb * len) + ft_value(str[i], base);
		i++;
	}
	return (nb * sign);
}
/*
// Valid : "+-+---+2345" -> sign = -

#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_atoi_base("   -++----101010 ", "01"));
}*/

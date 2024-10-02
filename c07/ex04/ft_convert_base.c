/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:57:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/21 09:48:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_value(char c, char *str);

int	ft_atoi_base(char *str, char *from)
{
	int	i;
	int	nb;
	int	sign;
	int	len;

	i = 0;
	nb = 0;
	sign = 1;
	len = ft_strlen(from);
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_value(str[i], from) >= 0)
	{
		nb = nb * len + ft_value(str[i], from);
		i++;
	}
	return (nb * sign);
}

char	*ft_putnbr_base(int nbr, char *to, char *str, int *i)
{
	long	nb;
	int		len;

	len = ft_strlen(to);
	nb = nbr;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
		(*i)++;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, to, str, i);
		ft_putnbr_base(nb % len, to, str, i);
	}
	else
	{
		str[*i] = to[nb];
		(*i)++;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*result;
	int		i;

	i = 0;
	if (ft_check_base(base_from) == 1 || ft_check_base(base_to) == 1)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	result = malloc(sizeof(char) * 35);
	if (!result)
		return (NULL);
	while (i < 35)
		result[i++] = '\0';
	i = 0;
	result = ft_putnbr_base(nb, base_to, result, &i);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{	
	char *final = ft_convert_base("    ---+++--2147483648", "0123456789", "01");
	printf("%s", final);
	free(final);
}*/

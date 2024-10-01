/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:53:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 11:45:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_printable(char c)
{
	if (c > 31 && c < 127)
		return (0);
	return (1);
}

void	ft_put_hex(int nbr, char *str)
{
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16, str);
		ft_put_hex(nbr % 16, str);
	}
	else
	{
		write(1, &str[nbr], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*code;

	code = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 0)
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_put_hex(str[i], code);
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu 	\b vas bien ?");
	ft_putstr_non_printable("	");


}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:24:40 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/07 18:57:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 'A')
			i++;
		else if (*str > 'z')
			i++;
		else if (*str > 'Z' && *str < 'a')
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
	int	y;

	y = ft_str_is_alpha("");
	printf("%i", y);
	return 0;
}
*/

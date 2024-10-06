/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:44:48 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/06 13:02:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_op.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_subtract(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_divine(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	else
		ft_putnbr(a / b);
}

void	ft_modulo(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	else
		ft_putnbr(a % b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:57:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/06 11:49:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H

# include <unistd.h>

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
void	ft_add(int a, int b);
void	ft_subtract(int a, int b);
void	ft_multiply(int a, int b);
void	ft_divine(int a, int b);
void	ft_modulo(int a, int b);

#endif

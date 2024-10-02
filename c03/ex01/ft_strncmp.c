/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:39:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/09/10 15:58:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
// strncmp is similar with strcmp
// except that it only compares the first (at most) n bytes of s1 vs s2
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s[100] = "huuuuuuuuuu";
        char t[100] = ""; //s < t
        printf("%i\n", strncmp(s, t, 5)); //+1
        

        printf("%i", ft_strncmp(s, t, 5));
}*/				

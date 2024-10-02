/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 20:50:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/10/01 22:08:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd);

int	main(int argc, char *argv[])
{
	int		fd;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY); //Read-only
	if (fd == -1) //if the file cannot be opened, it will return -1 to signal error.
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

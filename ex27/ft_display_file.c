/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:28:29 by lucpardo          #+#    #+#             */
/*   Updated: 2025/04/26 19:02:04 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

void	ft_error(char *error)
{
	int	i;

	i = 0;
	while (error[i] != '\0')
	{
		i++;
	}
	write(2, error, i);
	write(2, "\n", 1);
}

int	ft_display_file(char *file)
{
	int		fd;
	ssize_t	bytes_read;
	ssize_t	bytes_write;
	char	buffer[BUFFER_SIZE];

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (1);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_write = write(1, buffer, bytes_read);
		if (bytes_write != bytes_read)
		{
			close(fd);
			return (1);
		}
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read < 0)
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	status;

	if (argc != 2)
	{
		if (argc < 2)
		{
			ft_error("File name missing.");
		}
		else
		{
			ft_error("Too many arguments.");
		}
		return (1);
	}
	status = ft_display_file(argv[1]);
	if (status != 0)
	{
		ft_error("Cannot read file.");
		return (1);
	}
	return (0);
}

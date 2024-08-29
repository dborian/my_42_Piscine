/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpicard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:25:26 by anpicard          #+#    #+#             */
/*   Updated: 2024/08/28 13:20:55 by dedme            ###   ########.fr       */
/*   Updated: 2024/08/28 12:03:08 by anpicard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/bsq.h"

int	ft_open_file(char *path_file)
{
	int	fd;

	fd = open(path_file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error opening the file\n", 23);
		return (0);
	}
	return (fd);
}

int	ft_get_file_len(char *path_file)
{
	int		nb_read;
	int		fd;
	int		count;
	char	buf [1];

	nb_read = -1;
	count = 0;
	fd = ft_open_file(path_file);
	while (nb_read != 0)
	{
		nb_read = read(fd, buf, 1);
		if (nb_read == -1)
		{
			write (2, "Error can't read the file\n", 26);
			return (0);
		}
		count++;
	}
	close (fd);
	return (count);
}

char	*ft_read_file(char *path_file, char *buf, int file_len)
{
	int	nb_read;
	int	count;
	int	fd;

	nb_read = -1;
	count = 0;
	fd = ft_open_file (path_file);
	if (nb_read != 0)
	{
		nb_read = read(fd, buf, file_len);
		if (nb_read == -1)
		{
			write (2, "Error can't read the file\n", 26);
			return (NULL);
		}
		buf[nb_read] = '\0';
	}
	close (fd);
	return (buf);
}

char	*ft_file(char *path_file)
{
	char	*buf;
	int		file_len;

	buf = NULL;
	file_len = ft_get_file_len(path_file) + 1;
	buf = malloc(sizeof(buf) * file_len);
	ft_read_file(path_file, buf, file_len - 1);
	return (buf);
}

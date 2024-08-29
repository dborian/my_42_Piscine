/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbialung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:37:18 by jbialung          #+#    #+#             */
/*   Updated: 2024/08/25 23:34:53 by dedme            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	open_file(char *path_file)
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

int	get_file_len(char *path_file)
{
	int		nb_read;
	int		fd;
	int		count;
	char	buf [1];

	nb_read = -1;
	count = 0;
	fd = open_file(path_file);
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

char	*read_file(char *path_file, char *buf, int file_len)
{
	int	nb_read;
	int	count;
	int	fd;

	nb_read = -1;
	count = 0;
	fd = open_file (path_file);
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
/*int main()
{
	char path_file [] = "numbers.dict";
	char *buf;
	int file_len;
	buf = NULL;
	file_len = get_file_len(path_file) + 1;
	buf = (char *) malloc(file_len * sizeof(char));
	read_file(path_file, buf, file_len - 1);
	free(buf);
}*/

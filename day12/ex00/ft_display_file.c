/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:37:33 by sulim             #+#    #+#             */
/*   Updated: 2019/07/25 21:58:02 by sulim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	print_file(char *file)
{
	int		fd;
	char	buf[1];

	fd = open(file, O_RDONLY);
	while (read(fd, buf, sizeof(buf)))
	{
		write(1, buf, 1);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_file(argv[1]);
	}
	else if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
	}
	else
	{
		write(1, "Too many arguments.\n", 20);
	}
}

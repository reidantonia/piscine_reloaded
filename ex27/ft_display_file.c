/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:46:29 by areid             #+#    #+#             */
/*   Updated: 2017/11/08 09:18:05 by areid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_file(char *argv)
{
	int		fd;
	int		ret;
	int		x;
	char	buf[BUF_SIZE + 1];

	x = 0;
	fd = open(argv, O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	write(1, buf, ret);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		if (argc == 1)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}

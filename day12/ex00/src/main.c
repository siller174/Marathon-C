/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 10:33:59 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/03 10:34:00 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if ((argc == 1) || (argc > 2))
		return (0);
	if ((fd = open(argv[1], O_RDONLY, 0)) == -1)
	{
		ft_putstr("Open() error\n");
		return (1);
	}
	else
	{
		ret = read(fd, &buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		ft_putstr("Close() error\n");
}

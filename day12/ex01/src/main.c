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

#define BUF_SIZE 2

void	ft_puterror_part(char *s)
{
	ft_putstr("ft_cat: ");
	ft_putstr(s);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 0;
	while (++i < argc)
	{
		if ((fd = open(argv[i], O_RDWR, 0)) == -1)
		{
			ft_puterror_part(argv[i]);
			if (errno == EISDIR)
				ft_putstr(": Is a directory\n");
			if (errno == ENOENT)
				ft_putstr(": No such file or directory\n");
			errno = 0;
		}
		else
		{
			ret = read(fd, &buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
		}
	}
	close(fd);
}

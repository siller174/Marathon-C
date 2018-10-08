/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 00:26:35 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/28 01:18:20 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char			*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int				ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int				main(int argc, char **argv)
{
	int i;

	i = 1;
	while (argc > i)
	{
		argv[i] = ft_strlowcase(argv[i]);
		if ((ft_strcmp(argv[i], "president") == 0) ||
				(ft_strcmp(argv[i], "attack") == 0) ||
				(ft_strcmp(argv[i], "bauer") == 0))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}

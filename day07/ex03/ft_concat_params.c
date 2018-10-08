/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 09:57:49 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 11:32:13 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		len;
	char	*result;

	i = 1;
	len = 0;
	while (i < argc)
		len = len + ft_strlen(argv[i++]) + 1;
	result = (char *)malloc(sizeof(char) * len);
	i = -1;
	while (++i < len)
	{
		result[i] = argv[1][i];
		if (argv[1][i] == '\0')
			result[i] = '\n';
	}
	result[i - 1] = '\0';
	return (result);
}

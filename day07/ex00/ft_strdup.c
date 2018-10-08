/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 14:52:40 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/26 19:53:31 by sorwyle          ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		strlen;
	int		i;
	char	*mal;

	i = 0;
	strlen = ft_strlen(src);
	mal = (char*)malloc((strlen + 1) * sizeof(char));
	while (src[i] != '\0')
	{
		mal[i] = src[i];
		i++;
	}
	mal[i] = '\0';
	return (mal);
}

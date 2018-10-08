/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 16:28:14 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 14:06:45 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *list;
	int count;

	if (min >= max)
		return (0);
	else
	{
		count = max - min;
		list = (int*)malloc(sizeof(int) * count);
		while (min < max)
			*list++ = min++;
	}
	return (list - count);
}

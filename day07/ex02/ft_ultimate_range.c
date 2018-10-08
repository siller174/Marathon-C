/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 20:09:39 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 11:17:29 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int count;
	int *temp;

	temp = NULL;
	i = 0;
	if (min >= max)
		return (*temp);
	else
	{
		count = max - min;
		temp = (int*)malloc(sizeof(int) * count);
		while (min < max)
		{
			temp[i] = min;
			min++;
			i++;
		}
		*range = temp;
		return (i);
	}
}

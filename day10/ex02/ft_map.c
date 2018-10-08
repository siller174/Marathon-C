/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:08:14 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/01 12:43:32 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *res;

	res = (int*)malloc(sizeof(int) * (length - 1));
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

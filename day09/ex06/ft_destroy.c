/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 22:24:22 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 22:46:43 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib>

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	while (factory[i])
	{
		j = 0;
		while (factory[i][j] != '\0')
		{
			free(factory[i][j]);
			j++;
		}
		i++;
	}
	free(cartory);
}

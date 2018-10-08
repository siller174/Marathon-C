/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 21:22:17 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 21:50:03 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
	return (0);
}

int		ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
	return (0);
}

int		ft_antidote(int i, int j, int k)
{
	int min;
	int max;

	min = ft_min(ft_min(i, j), k);
	max = ft_max(ft_max(i, j), k);
	return (i + j + k - min - max);
}

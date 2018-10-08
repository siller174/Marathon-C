/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 11:39:25 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/22 19:31:50 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int count;

	count = 0;
	i = 2;
	if (nb <= 1)
		return (0);
	if (nb < 2)
		return (1);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		if (count > 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

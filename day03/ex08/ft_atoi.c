/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 19:57:02 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/21 21:01:44 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	number;
	int	negative;

	negative = 1;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
		number = number * 10 + (*str++ - '0');
	return (number * negative);
}

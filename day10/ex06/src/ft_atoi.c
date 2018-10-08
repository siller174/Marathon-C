/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:14:04 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/01 16:14:06 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_skip_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int	number;
	int	negative;

	negative = 1;
	while (ft_skip_space(*str))
		str++;
	if ((*str == '+' && *(str + 1) == '-')
			|| (*str == '-' && *(str + 1) == '+'))
		return (0);
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

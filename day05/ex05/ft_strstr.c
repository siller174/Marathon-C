/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:49:16 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/24 15:21:32 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 16:24:04 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/24 19:51:18 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] < 'a' || str[i - 1] > 'z') &&
					(str[i - 1] < '0' || str[i - 1] > '9') &&
						(str[i - 1] < 'A' || str[i - 1] > 'Z'))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

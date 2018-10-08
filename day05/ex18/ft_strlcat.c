/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 11:07:46 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/25 13:15:34 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int size_dest;
	int k;

	k = 0;
	i = 0;
	j = 0;
	size_dest = ft_strlen(dest);
	while (src[j] != '\0' && i < size)
	{
		dest[size_dest + j] = src[j];
		j++;
	}
	dest[size_dest + j] = '\0';
	while (src[k] != '\0')
		k++;
	return (k + size);
}

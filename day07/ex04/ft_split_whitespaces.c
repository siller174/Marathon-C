/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 12:58:55 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 13:58:02 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		its_skip_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		words_num(char *str)
{
	int		i;
	int		words_num;

	i = 0;
	words_num = 0;
	while (str[i])
	{
		if (!its_skip_space(str[i]))
			if (its_skip_space(str[i + 1]) || (str[i + 1] == '\0'))
				words_num++;
		i++;
	}
	return (words_num);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**words;
	char	*str_buf;

	if (!str ||
			!(words = (char **)malloc(sizeof(char *) * (words_num(str) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	str_buf = str;
	while (j < words_num(str))
	{
		while (its_skip_space(*str_buf))
			str_buf++;
		words[j] = (char *)malloc(sizeof(char *));
		while (!its_skip_space(*str_buf) || !*str_buf)
			words[j][i++] = *str_buf++;
		words[j][i] = '\0';
		j++;
		i = 0;
	}
	words[j] = NULL;
	return (words);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 18:34:41 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/01 18:34:43 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lentab(char **s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		l;
	char	*temp;

	l = ft_lentab(tab);
	i = 0;
	while (++i < l)
	{
		j = i;
		while (++j < l)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}

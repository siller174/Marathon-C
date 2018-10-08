/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:16:52 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/20 19:32:26 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int			as;
	int			bs;
	int			le;
	char		b;

	bs = 0;
	le = 0;
	while (str[le] != '\0')
	{
		le++;
	}
	as = le - 1;
	while (bs < as)
	{
		b = str[bs];
		str[bs] = str[as];
		str[as] = b;
		bs++;
		as--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:44:31 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/03 18:44:34 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*list;

	list = begin_list;
	i = 1;
	if (begin_list == NULL)
		return (NULL);
	while (i < nbr)
	{
		if (!list->next)
			return (NULL);
		list = list->next;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 13:10:01 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/02 13:10:28 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	count = 0;
	if (begin_list)
	{
		count = 1;
		list = begin_list;
		while (list->next)
		{
			count++;
			list = list->next;
		}
	}
	return (count);
}

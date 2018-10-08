/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 15:02:08 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/02 15:02:11 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;
	t_list	*begin_list;

	i = 2;
	begin_list = ft_create_elem(av[1]);
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = begin_list;
		begin_list = list;
	}
	return (begin_list);
}

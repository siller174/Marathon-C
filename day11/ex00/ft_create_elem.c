/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 09:47:50 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/02 09:47:52 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->next = NULL;
	list->data = data;
	return (list);
}

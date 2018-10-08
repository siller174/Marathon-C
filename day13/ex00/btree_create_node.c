/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:31:50 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/04 13:31:53 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *list;

	list = (t_btree*)malloc(sizeof(t_btree));
	if (!list)
		return (NULL);
	list->right = NULL;
	list->left = NULL;
	list->item = item;
	return (list);
}

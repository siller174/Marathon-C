/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:56:35 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/05 20:41:44 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_btree.h>

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (temp && *temp)
	{
		if (cmpf(temp->item, item) > 0)
			btree_insert_data(temp->left);
		else if (cmpf(temp->item, item) < 0)
			btree_insert_data(temp->right);
	}
	else
		return (NULL);
}

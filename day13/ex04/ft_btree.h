/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:27:13 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/05 20:43:30 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct		s_btree
{
	struct s_tree	*left;
	struct s_tree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
#endif

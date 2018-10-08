/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:00:24 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 17:09:44 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_BOOLEAN_H
# define __FT_BOOLEAN_H
# define SUCCESS 1
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) nbr % 2 == 0

# include <unistd.h>

typedef int		t_bool;
#endif

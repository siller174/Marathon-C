/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 03:29:02 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/28 03:34:44 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define FT_PERSO_N
# ifdef FT_PERSO_N
# define SAVE_THE_WORLD "SAVE_THE_WORLD"
# define strdup(str) str

typedef struct struct
{
	char *name;
	float life;
	int age;
	char *profession;
} t_perso;

#endif

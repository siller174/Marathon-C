/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 16:08:43 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/26 13:55:36 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_printarg(int k, int argc, char **argv)
{
	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*temp;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			j = i;
			while (++j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
			}
		}
		k = 1;
		ft_printarg(k, argc, argv);
	}
}

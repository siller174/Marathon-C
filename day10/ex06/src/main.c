/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:49:35 by sorwyle           #+#    #+#             */
/*   Updated: 2018/10/01 16:49:36 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_control(int a, int b, char s, int (*func[])(int, int))
{
	if (s == '-')
		ft_putnbr(func[0](a, b));
	else if (s == '+')
		ft_putnbr(func[1](a, b));
	else if (s == '*')
		ft_putnbr(func[2](a, b));
	else if (s == '/')
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(func[3](a, b));
	else if (s == '%')
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(func[4](a, b));
	else
		ft_putstr("0");
	ft_putstr("\n");
}

int		main(int argc, char **argv)
{
	int (*func[5])(int, int);

	func[0] = sub;
	func[1] = add;
	func[2] = mult;
	func[3] = div;
	func[4] = mod;
	if (argc != 4)
		return (0);
	if (((argv[2][0] == '*') || (argv[2][0] == '+') || (argv[2][0] == '-') ||
		(argv[2][0] == '/') || (argv[2][0] == '%')) && (argv[2][1] == '\0'))
		ft_control(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0], func);
	else
	{
		ft_putstr("0");
		ft_putstr("\n");
	}
}

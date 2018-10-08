/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorwyle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 17:23:50 by sorwyle           #+#    #+#             */
/*   Updated: 2018/09/27 18:02:03 by sorwyle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0)
		hour = 24;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	if (hour <= 12 && hour >= 1)
	{
		if (hour == 1)
			printf(" 1.00 A.M. AND 2.00 A.M.");
		else if (hour == 12)
			printf(" 12.00 P.M. AND 1.00 P.M.");
		else if (hour == 11)
			printf(" 11.00 A.M. AND 12.00 P.M.");
		else
			printf(" %d.00 A.M. AND %d.00 A.M.", hour, hour + 1);
	}
	else
	{
		if (hour == 24)
			printf(" 12.00 A.M. AND 1.00 A.M.");
		else if (hour == 23)
			printf(" 11.00 P.M. AND 12.00 A.M.");
		else
			printf(" %d.00 P.M. AND %d.00 P.M.", hour, hour + 1);
	}
	printf("\n");
}

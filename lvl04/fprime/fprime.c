/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:35:43 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/08 23:35:43 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int nbr)
{
	int i;

	i = 2;
	if (nbr == 1)
		return(0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		else
			i++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int nbr;
	int prm;

	prm = 2;
	nbr = atoi(&av[1][i]);
	if (ac == 2)
	{
		if (nbr == 1)
		{
			printf("1");
			return(0);
		}
		else if(nbr == 2)
		{
			printf("2");
			return(0);
		}
		else if (nbr >= 2)
		{
			while (prm <= nbr)
			{
				if (nbr % prm == 0)
				{
					while (is_prime(prm) == 1)
					{
						printf("%d", prm);
						printf("*");
					}
				}
				prm++;
			}
		}
	}
	return(0);
}
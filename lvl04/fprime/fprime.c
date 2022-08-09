/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:35:43 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/09 15:56:19 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BOZUK !!!!!!!!!!!!!!
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
void star()
{
	printf("*\n");
}
int main(int ac, char **av)
{
	int i = 0;
	int nbr;
	int prm;
	int count;
	int tmp;

	prm = 2;
	tmp = 0;
	count = 0;
	nbr = atoi(&av[1][i]);
	while(prm <= nbr)
	{
		if (is_prime(prm) == 1)
		{
			tmp = nbr;
			while (tmp % prm == 0)
			{
				count++;
				tmp = tmp / prm;
			}
			while (count > 0)
			{
				count--;
				//printf("tmp:%d\n", tmp);
				//printf("nbr:%d\n", nbr);
				//printf("prm:%d", prm);			
				printf("%d\n", prm);
				printf("count:%d", count);
				star();
			}
		}
		prm++;
	}
}
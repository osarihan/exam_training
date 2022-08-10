/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:35:43 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:12:38 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there's one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/

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

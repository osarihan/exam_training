/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:00:02 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/09 12:04:52 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int ft_atoi(char *av)
{
	int res;
	int total;
	int i;
	
	i = 0;
	total = 0;
	res = 1;
	if(av[i] == '-')
	{
		res *= -1;
		i++;
	}
	while (av[i] != '\0')
	{
	    total *= 10;
		total += av[i] - 48;
		i++;
	}
	return(total * res);
}

int main(int ac, char **av)
{
	int i;
	int count;
	int nbr;
	int prm;

	prm = 1;
	nbr = 0;
	i = 0;
	count = 0;
	nbr = ft_atoi(&av[1][i]);
	while(nbr >= 0)
	{
		if (is_prime(prm) == 1)
		{
			count += prm;
		}
		prm++;
	}
	return (prm);
}
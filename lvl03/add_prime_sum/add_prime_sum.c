/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 00:00:02 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:16:02 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*


Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>

*/
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

void	ft_putnbr(int nbr)
{
	char tmp;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		tmp = nbr + 48;
		write(1, &tmp, 1);
	}
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
	while(nbr > 0)
	{
		if (is_prime(prm) == 1)
		{
			count += prm;
		}
		prm++;
		nbr--;
	}
	ft_putnbr(count);
	write(1, "\n", 1);
}
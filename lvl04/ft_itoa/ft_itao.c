/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itao.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:45:55 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 17:59:42 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);

*/

#include <stdio.h>
#include <stdlib.h>


int len_count(int number)
{
	int count;
	int nbr;

	nbr = number;
	count = 0;
	if (number < 0)
	{
		number = number * -1;
		count++;
	}
	while(nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

int take_power_ten(int nbr)
{
	int total;

	total = 1;
	if (nbr == 0)
		return(1);
	while (nbr > 0)
	{
		total = total * 10;
		nbr--;
	}
 	return(total);
}

int find_bas(int number, int line)
{
	int turn;
	
	turn = ((number / (take_power_ten(line - 1))) % 10);
	line--;
	return(turn);
}

char	*ft_itoa(int nbr)
{
	int j = 1;
	char *str;
	int i = 0;
	unsigned int len;
	len = len_count(nbr);
	str = malloc(sizeof(char *) * len);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[i] = '-';
		i++;
	}
	printf("len:%d\n", len);
	while (len)
	{
		str[i] = (find_bas(nbr, len) + 48);
		i++;
		j++;
		len--;
	}
	str[i] = '\0';
	printf("%s\n", str);
	return(str);
}

int main()
{
	char *str;
	str = malloc(1000);
	int i = 0;
	str = ft_itoa(i);
	printf("%s\n", str);
}

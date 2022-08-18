/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:32:08 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/11 14:51:52 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$
*/
#include <signal.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	while(str[i] != '\0')
		i++;
	return(i);
}

int main(int ac, char **av)
{
	int	j = ft_strlen(&av[1][0]);
	while(j-- && write(1, &av[1][j], 1));
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:15:52 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/16 13:00:43 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>
#include <stdio.h>

int u_checker(char c, int i, char *str)
{
	int j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return(0);
		j++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int kill = 0;

	if (ac == 3)
	{
		while (av[1][j] != '\0')
		{
			while (av[2][i] != '\0')
			{
				if (av[1][j] == av[2][i])
				{
					if (u_checker(av[1][j], j, &av[1][0]) == 1)
					{
						write(1, &av[1][j], 1);
						kill = 1;
					}
				}
				if  (kill == 1)
					break;
				i++;
			}
			kill = 0;
			t++;
			j = t;
			i = 0;
		}
	}
}
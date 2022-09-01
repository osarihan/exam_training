/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alfa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:27:00 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:18:45 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>

*/
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			count = argv[1][i] - 96;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			count = argv[1][i] - 64;
		while(count > 0)
		{
			write(1, &argv[1][i], 1);
			count--;
		}
		count = 0;
		i++;
	}
	return (0);
}
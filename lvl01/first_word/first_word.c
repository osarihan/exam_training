/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:37:43 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:16:34 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>

*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

//dont use printf use putstr
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	char *tmp;

	tmp = malloc(sizeof(char) * 1000);
	while(av[1][i] == ' ')
		i++;
	while(av[1][i] > 32 && av[1][i] != '\0')
	{
		tmp[j] = av[1][i];
		i++;
		j++;
	}
	printf("%s\n", tmp);
}
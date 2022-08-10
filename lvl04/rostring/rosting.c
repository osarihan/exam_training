/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rosting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:47:52 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:14:26 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


/*

Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>
*/

//without ft_split function
//!dont use printf use putstr!
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *tmp;
    char *tmp2;

	tmp = malloc(sizeof(char) * 1000);
	tmp2 = malloc(sizeof(char) * 1000);
	while(argv[1][i] == ' ')
        i++;	
	while (argv[1][i] != ' ' && argv[1][i] != '\0')
    {
        tmp[j] = argv[1][i];
        j++;
        i++;
    }
    while(argv[1][i] != '\0')
    {
        while(argv[1][i] == ' ')
		{
            i++;
		}
        while (argv[1][i] != ' ')
        {
			if (argv[1][i] == '\0')
				break;
            tmp2[k] = argv[1][i];
            k++;
            i++;
    	}
		while (argv[1][i] == ' ')
		{
			i++;
			if(argv[1][i] == '\0')
				break;
		}
		tmp2[k++] = ' ';
    }
    j = 0;
	if(tmp2[j] == ' ' && tmp2[j + 1] == '\0')
	{
		printf("%s", tmp);
		return(0);
	}
    while (tmp[j] != '\0')
    {
        tmp2[k] = tmp[j];
        k++;
        j++;
    }
    tmp2[k] = '\0';
	printf("%s\n", tmp2);
}
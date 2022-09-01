/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:39:46 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/11 12:48:28 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	int a;
	int b;
	
	a = atoi(&av[1][0]);
	b = atoi(&av[3][0]);
	if(ac == 4)
	{
		if (av[2][0] == '*')
		{
			i = a * b;
			printf("%d\n", i);
		}
		else if (av[2][0] == '/')
		{
			i = a / b;
			printf("%d\n", i);
		}
		else if (av[2][0] == '+')
		{
			i = a + b;
			printf("%d\n", i);
		}
		else if (av[2][0] == '-')
		{
			i = a - b;
			printf("%d\n", i);
		}
	}
	return (0);
}
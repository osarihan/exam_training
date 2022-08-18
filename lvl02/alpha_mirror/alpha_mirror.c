/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:43:32 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/11 16:31:56 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
Footer
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int j;
	
	if (!av[1][0])
	{
		write(1, "\n", 1);
		return(0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			av[1][i] = 'M' - (av[1][i] - 'N');
			i++;
		}
		else if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			av[1][i] = 'm' - (av[1][i] - 'n');
			i++;
		}
	}
	ft_putstr(&av[1][0]);
}

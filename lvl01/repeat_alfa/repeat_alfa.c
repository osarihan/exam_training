/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alfa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:27:00 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/08 23:27:00 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
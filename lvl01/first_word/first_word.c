/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:37:43 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/05 14:37:43 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
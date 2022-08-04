/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rosting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:47:52 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/04 16:50:46 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:49:56 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:13:38 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);

*/
#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
	char **dst;
	int i = 0;
	int j = 0;
	int k = 0;

	dst = malloc(sizeof(char **) * 1000);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		j = 0;
		dst[k] = malloc(sizeof(char *) * 1000);
		while((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
			i++;
		while(str[i] != ' ' && str[i] != '\0')
		{
			dst[k][j] = str[i];
			i++;
			j++;
		}
		k++;
	}
	return(dst);
}
int main()
{
	char *src = "bir eylul aksami";
	char **str;
	str = malloc(sizeof(char **) * 1000);
	str = ft_split(src);
	printf("%s\n", &str[1][0]);
}

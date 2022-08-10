/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:47:15 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:02:10 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

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
	printf("%s\n", &str[2][0]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:32:59 by osarihan          #+#    #+#             */
/*   Updated: 2022/09/01 01:33:00 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char *gnl(int fd){
	char *c;
	int i;
	char a;
	i = 0;
	c = malloc(sizeof(char *) * 100000);
	char *asd;
	asd = c;
	while (i = read(fd, &a, 1) > 0 &&  a != '\n')
	{
		*c = a;
		*c++;
	}
	*c = '\0';
	return(asd);
}

int main(void)
{
	char *line;
	int fd;
	fd = open("ouz.txt", O_RDONLY);
	line = gnl(fd);
	printf("%s\n", line);
	line = gnl(fd);
	printf("%s\n", line);
	line = gnl(fd);
	printf("%s\n", line);
}

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
	while ((i = read(fd, &a, 1) > 0) &&  a != '\n')
	{
		*c = a;
		c++;
	}
	*c = '\n';
	c++;
	*c = '\0';
	return(asd);
}

int main()
{
	char *line;
	int fd = open("ouz.txt", O_RDONLY);
	line = gnl(fd);
	printf("%s", line);
	line = gnl(fd);
	printf("%s", line);
	line = gnl(fd);
	printf("%s", line);
	line = gnl(fd);
	printf("%s", line);
}
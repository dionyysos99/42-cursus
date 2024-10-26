#include "get_next_line.h"
#   include <fcntl.h>
#   include <unistd.h>
#   include <stdlib.h>
#   include <stdio.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42 
#endif
char *get_next_line(int fd)
{
	char *buffer;
	int bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return NULL;
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0) 
	{
		free(buffer); 
		return NULL;
	}
	buffer[bytes_read] = '\0';
	return buffer;
}
int main()
{
	int fd = open("get_next_line.c",O_RDONLY);
	char *line = get_next_line(fd);
	if (line)
	{
		printf("%s", line);
		free(line);
	}
	return 0;   
}
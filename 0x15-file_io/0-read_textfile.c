#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @letters: number of letters it should read and print
 * @filename:the open file
 *  Return:number of letters it could read and print
 *  return 0 if filename is NULL or function
 *  failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t rd;
fd  = open(filename, O_RDONLY);
if (fd == -1)
return (0);
char *buffer = malloc(sizeof(char) * letters);
rd = read(fd, buffer, letters);
ssize_t wt =  write(STDOUT_FILENO, buffer, read);
free(buffer);
close(fd);
return (write);
}

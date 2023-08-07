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
ssize_t fd  = open(filename, O_RDONLY);
char *buffer = malloc(sizeof(char) * letters);
ssize_t read = read(fd, buffer, letters);
ssize_t write =  write(STDOUT_FILENO, buffer, read);
free(buffer);
close(fd);
return (write);
}

#include "main.h"
/**
 * create_file -  function that creates a file.
 * @text_content:NULL terminated string to write to the file
 * @filename: name of the file to create
 *  Return:: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int length = 0;
int wt  = 0;
int fd = 0;
if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wt =  write(fd, text_content, length);
if (fd == -1 || wt == -1)
return (-1);
close(fd);
return (1);
}

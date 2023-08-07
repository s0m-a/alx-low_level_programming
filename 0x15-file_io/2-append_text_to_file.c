#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content:NULL terminated string to add at the end of the file
 * Return:1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)

{
int open = 0;
lnt write = 0;
int length = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
open = open(filename, O_WRONLY | O_APPEND);
write = write(open, text_content, length);
if (open == -1 || write == -1)
{
return (-1);
}
close(open);
return (1);
}

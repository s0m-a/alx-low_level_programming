#include "main.h"
/**
 * main- code starts here
 * description: prints 10 times the alphabet, in lowercase
 * Returns:Return 0
*/
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}

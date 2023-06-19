#include <stdio.h>
/**
* main - code starts here
*description : Prints numbers between 0 to 9 and letters from a to f
*Return: Returns 0 Success
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
for (i = 97; i < 103; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}

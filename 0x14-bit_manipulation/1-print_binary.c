#include <stdio.h>
/**
* print_binary -  function that prints the binary rep. of a number.
* @n: binary representation of a number
*/
void print_binary(unsigned long int n)
{
unsigned long int flag;
int count = 0;
for (int i = 63; i >= 0; i--)
{
flag = n >> i;
if (flag & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

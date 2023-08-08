#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number.
 * @n:interger to change in binary
 */
void print_binary(unsigned long int n)
{
int count = 0;
int i =0;
unsigned long int present;
for (i = 63; i >= 0; i--)
{
present = n >> i;
if (present & 1)
{
_putchar('1');
count++;
}
else if (count)
{
_putchar('0');
}
}
if (!count)
{
_putchar('0');
}
}

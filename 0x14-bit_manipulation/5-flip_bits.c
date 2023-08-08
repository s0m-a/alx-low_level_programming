#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return:the number of bits been changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
int count = 0;
unsigned long int exclusive = n ^ m;
unsigned long int pre;
for (i = 63; i >= 0; i--)
{
pre = exclusive >> i;
if (pre & 1)
count += 1;
}
return (count);
}

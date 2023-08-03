#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 *you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int XOR = n ^ m;
int count = 0;
for (int i = 63; i >= 0; i--)
{
result = XOR >> i;
if (result & 1)
count++;
}
return (count);
}

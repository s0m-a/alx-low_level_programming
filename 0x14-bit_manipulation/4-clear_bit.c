#include "main.h"
/**
 * clear_bit -function that sets the value of a bit to 0 at a given index.
 * @index: index
 * @n: a pointer
 * Return:1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
while (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - alphatbets  
 * description = program that print the alphabet without e and q
 * Return:Returns 0
 */
int main(void)
{
char apl[26] = "abcdefghijklnmopqrstuvwxyz";
for (int i = 0 ; i < 26 ; i++)
if (i != 4 && i != 16)
{
putchar(apl[i]);
}
putchar('\n');
return (0);
}

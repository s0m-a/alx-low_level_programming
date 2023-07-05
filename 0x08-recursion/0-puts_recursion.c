#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @a: input
 * Return: Returns 0 (Success)
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}

	else
		_putchar('\n');
}

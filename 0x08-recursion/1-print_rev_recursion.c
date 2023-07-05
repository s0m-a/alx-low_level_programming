#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @a: The string to be printed.
 *Return:Returns 0 (success)
 */
void _print_rev_recursion(char *a)
{
	if (*a)
	{
		_print_rev_recursion(a + 1);
		_putchar(*a);
	}
}

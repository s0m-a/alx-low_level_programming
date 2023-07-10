#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s0: input one
 * @s1: input two
 * Return: concat of s0 and s1
 */
char *str_concat(char *s0, char *s1)
{
	char *conct;
	int i, ci;

	if (s0 == NULL)
		s0 = "";
	if (s1 == NULL)
		s1 = "";

	i = ci = 0;
	while (s0[i] != '\0')
		i++;
	while (s1[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s0[i] != '\0')
	{
		conct[i] = s0[i];
		i++;
	}

	while (s1[ci] != '\0')
	{
		conct[i] = s1[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}


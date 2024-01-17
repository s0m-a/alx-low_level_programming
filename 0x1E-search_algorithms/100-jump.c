#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  jump search algorithm function
 * @array: first elem of array
 * @size: number of elem in array
 * @value: value to search
 * Return: first index containing `value`, or -1 if `value` not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, n, jump;

	if (!array || size == 0)
		return (-1);

	for (n = sqrt(size); i < size; i += n)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - n, i);
	for (jump = i - n; jump < size && jump <= i; jump++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
	}
	return (-1);
}

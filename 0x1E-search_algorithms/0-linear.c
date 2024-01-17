#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array:the array
 * @size: size of elements in the array
 * @value:value to be searched
 * Return: Value, or -1 if input is  not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}

#include "search_algos.h"

/**
 * binary_search - binary search function
 * @array:first element of array to seach
 * @size: num of elements in array
 * @value: value we are looking for
 * Return: index containing `value`, or -1 if `value` not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

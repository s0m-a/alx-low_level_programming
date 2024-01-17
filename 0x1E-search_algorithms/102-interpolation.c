i#include "search_algos.h"

/**
 * interpolation_search - function searches for a value
 * @array: Ptr to the first element
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The index where value is located or -1 on fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		posi = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (posi < size)
		{
			printf("Value checked array[%ld] = [%d]\n", posi, array[posi]);
			if (value == array[posi])
				return (posi);
			else if (value > array[posi])
				low = pos + 1;
			else if (value < array[posi])
				high = posi - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}
	return (-1);
}

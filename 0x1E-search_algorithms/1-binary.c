#include "search_algos.h"
/**
 * print - prints arr
 * @left: first index to print
 * @right: last index to print
 * @array: array to print
 *
 * Return: void
 */
void print(size_t left, size_t right, int *array)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[right]);
}

/**
 * binary_search - function that searches for a value
 * @array: Ptr to first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located or -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print(left, right, array);

		mid = left + (right - left) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
	}
	return (-1);
}

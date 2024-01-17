#include "search_algos.h"
/**
 * print - prints the array
 * @left:first index to print
 * @right:last index to print
 * @array:array to print
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
 * bis - searches for a value in sorted array
 * @array: Ptr to the first element
 * @left: left index
 * @right: right index
 * @value: Value
 * Return: The index where value is located or -1 on fail
 */
int bis(int *array, size_t l, size_t r, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (leaf <= right)
	{
		mid = (left + right) / 2;
		print_array(left, right, array);
		if (value == array[mid])
			return (m);
		else if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 on fail
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t low, high;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	low = i / 2;
	high = i < size ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	return (binary_s(array, low, high, value));
}

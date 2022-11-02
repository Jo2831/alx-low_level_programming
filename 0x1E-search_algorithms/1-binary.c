#include "search_algos.h"


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: The start index to which the function begins to print.
 * @last: The last index to which the function stops printing.
 *
 */

void print_array(int *array, size_t start, size_t last)
{
	int i = 0;

	while (array && start <= last)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[start]);
		++start;
		++i;
	}
	printf("\n");
}

/**
 * help_recursive - Helps the search function for finding the index
 * corresponding to the value.
 *
 * @array: The array to be searched.
 * @left: The left bound index of reconstructed array.
 * @right: The right bound index of reconstructed array.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not found in the array, otherwise it returns the
 * index at which the value is present.
 *
 */

int help_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;


	if (left > right)
		return (-1);

	printf("Searching in array: ");
	print_array(array, left, right);

	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);

	else if (array[mid] < value)
		return (help_recursive(array, mid + 1, right, value));

	else
		return (help_recursive(array, left, mid - 1, value));
}

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 If value is not present in array or if array is NULL, otherwise
 * it returns the index where the value is located.
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL)
		return (-1);

	return (help_recursive(array, left, right, value));
}

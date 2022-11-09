#include "search_algos.h"


/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for.
 *
 * Return: -1, If value is not present in array or if array is NULL, otherwise
 * it returns the first index where the value is located.
 *
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}

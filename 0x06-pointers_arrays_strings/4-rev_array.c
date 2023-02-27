#include "main.h"

/**
 * reverse_array - reverses the given array
 * @a: an array to be reversed
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;
	int i = n - 1;

	for (index = 0; index < n / 2; index++)
	{
		temp = a[index];
		a[index] = a[i - index];
		a[i - index] = temp;
	}
}

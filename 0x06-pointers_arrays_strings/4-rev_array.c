/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int jo, i, j;

	i = 0;
	j = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (i < j)
	{
		jo = a[i];
		a[i] = a[j];
		a[j] = jo;
		i++;
		j--;
	}
}





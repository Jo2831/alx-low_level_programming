#include<stdio.h>

/**
  * main - main computes the largest divisor
  * Return: 0
  */

int main(void)
{
	long number = 612852475143;
	long div = 2;
	long largest = 0;

	while (number != 1)
	{
		if (number % div == 0)
		{
			number /= div;
			largest = div;
		}
		div++;
	}
	printf("%ld\n", largest);

	return (0);
}

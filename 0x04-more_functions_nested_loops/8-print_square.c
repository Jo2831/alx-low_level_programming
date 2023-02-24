#include "main.h"

/**
  * print_square - prints the square of the given square size
  * @size: an argument passed to print_square, it decides the size of square
  */

void print_square(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
  * print_triangle - prints the triangle pattern
  * @size: a single argument passed to print_triangle
  */

void print_triangle(int size)
{
	int rows, cols, space;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				space = (size - rows) - 1;

				if (space > cols)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

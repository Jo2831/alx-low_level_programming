#include "main.h"

/**
  * print_diagonal - prints the character in diagonal
  * @n: an argument passed to print_diagonal to receive the number of
  */

void print_diagonal(int n)
{
	int rows, cols;

	if (n > 0)
	{
		for (rows = 1; rows <= n; rows++)
		{
			for (cols = 0; cols < rows ; cols++)
			{
				if (cols != (rows - 1))
					_putchar(' ');
				else
					_putchar(92);
			}

			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}


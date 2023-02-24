#include "main.h"

/**
  * print_line - prints lines
  * @n: an argument passed to print_line
  */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}


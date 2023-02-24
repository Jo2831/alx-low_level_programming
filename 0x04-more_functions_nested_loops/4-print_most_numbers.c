#include "main.h"

/**
  * print_most_numbers - prints digits except 2 and 4
  */

void print_most_numbers(void)
{
	int numbers = 48;

	while (numbers < 58)
	{
		if (numbers != 50 && numbers != 52)
			_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}


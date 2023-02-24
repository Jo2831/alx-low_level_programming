#include "main.h"

/**
  * print_numbers - prints digits from 0 to 9
  */

void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
		putchar(numbers);
	putchar('\n');
}


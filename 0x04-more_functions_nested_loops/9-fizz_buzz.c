#include "main.h"

/**
  * main - computes FizzBuzz
  * Return: returns 0 with succes
  */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers < 101; numbers++)
	{
		if ((numbers % 3 == 0) && (numbers % 5 != 0))
			printf("Fizz");
		else if ((numbers %  5 == 0) && (numbers % 3 != 0))
			printf("Buzz");
		else if ((numbers % 3 == 0) && (numbers % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", numbers);
		if (numbers != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}

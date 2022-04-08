#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char num = '0';

	while ( num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}


#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main()
{
	int comb = 0;
	
	while (comb <= 9)
	{
		putchar(comb + '0');
		if (comb != 9)
		{
			putchar(',');
			putchar(' ');
		}

		comb++;
		

	}
	putchar('\n');

	return (0);

}

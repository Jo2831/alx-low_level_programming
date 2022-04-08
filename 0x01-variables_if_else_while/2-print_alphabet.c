#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{

	char alpha;
	alpha = 'a';

	while ( alpha <= 'z')
	{
		putchar (alpha);
		alpha++;
	}
	putchar('\n');

	return (0);

}

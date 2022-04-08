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
	char alpha = 'a';
	char alpha1 = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alpha1 <= 'Z')
	{
		putchar(alpha1);
		alpha1++;
	}
	putchar(\n);

	return (0);
}


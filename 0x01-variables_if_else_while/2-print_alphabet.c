#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	 putchar (char c)
	{
		write(1, &c, 1);
		return (0);
	}

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

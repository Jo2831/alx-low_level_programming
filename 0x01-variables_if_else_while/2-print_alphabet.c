#include<unistd.h>


int main(void)
{
	char putchar (char c)
	{
		write(1, &c, 1);
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

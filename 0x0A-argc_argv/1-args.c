#include <stdlib.h>
#include<stdio.h>
/**
 *main - print the number of parameter
 *
 *@argc: number of parameter
 *
 * @argv: value of parameter
 *
 *Return: argc
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}

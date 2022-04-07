#include <stdio.h>

/**
 * main - Entry point
 *
 * Description; using sizeof to print the size of various types.
 *
 * Return: Always 0 (succesful)
 */

int main(void)
{
	/*sizeof evaluates the size of a variable */
	printf("Size of a char; %lu byte(s)\n",sizeof(char));
	printf("Size of a int; %lu byte(s)\n",sizeof(int));
	printf("Size of an double: %lu byte(s)\n",sizeof(double));
	printf("Size of an long int; %lu byte(s)\n", sizeof(long int));
	printf("Size of an long long int; %lu byte(s)\n",sizeof(long long int ));
	
	return (0);
	
}


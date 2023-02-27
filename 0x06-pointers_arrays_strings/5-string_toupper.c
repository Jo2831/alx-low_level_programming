#include "main.h"

/**
 * string_toupper - converts alphabets from lower to upper
 * @str: a string argument to be converted
 * Return: returns pointer to string str
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
	}

	return (str);
}

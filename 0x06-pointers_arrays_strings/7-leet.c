#include "main.h"

/**
 * leet - Encodes the given string to 1337 or eleet or leetspeak or leet
 * @str: A string argument to be Encoded
 * Return: A pointer that points to encoded string;
 */

char *leet(char *str)
{
	int i, j;
	char *map_leet = "ol?ea??t";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
			if (str[i] == map_leet[j] || str[i] + 32 == map_leet[j])
				str[i] = j + '0';
	}

	return (str);
}

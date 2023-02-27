#include "main.h"

/**
 * rot13 - encrypts the string to its rot13 version
 * @s: a string argument to be encrypted
 * Return: returns a pointer to encrypted message
 */

char *rot13(char *s)
{
	int i = 0, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *map_rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = map_rot[j];
				break;
			}
		}
	}

	return (s);
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a string argument
 * @src: a string argument to be concatenated
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[j] != '\0'; j++)
		;

	for (; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}

	dest[j + i] = '\0';

	return (dest);
}

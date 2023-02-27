#include "main.h"

/**
 * _strncat - concatenates two strings with limited in bytes
 * @dest: a string argument to hold the concatenated string
 * @src: a string argument to be concatenated
 * @n: an argument that specifies how many bytes to be concatenated
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
		;
	for (; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[i + j] = src[j];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcmp - compares two strings that it accepts
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: returns 0 if they are equal, otherwise *s1 - *s1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

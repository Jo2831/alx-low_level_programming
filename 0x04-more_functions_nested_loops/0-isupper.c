#include "main.h"

/**
  * _isupper - checks for the uppercase letters
  * Return: returns 0
  * @c: an int type argument to the function _isupper
  */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}



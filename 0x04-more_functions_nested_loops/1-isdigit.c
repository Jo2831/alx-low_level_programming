#include "main.h"

/**
  * _isdigit - checks for the digits
  * @c: an int argumet passed to function _isdigit
  * Return: 0
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
int i;
int j;

i = 0;
while (s[i] != '\0')
{
i++;
}

while (i >= 0)
{
_putchar(s[i] + 0);
i--;
}
_putchar('\n');
}

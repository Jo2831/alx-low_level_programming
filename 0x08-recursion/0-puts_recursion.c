/**
 *_puts_recursion - a function that prints a string, followed by a new line
 * @s: string to print
 *
 *return: void
 *
 */
#include "main.h"
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}

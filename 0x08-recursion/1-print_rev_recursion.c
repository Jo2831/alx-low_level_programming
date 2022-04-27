#include"main.h"
/**
 *_print_rev_recursion - Write a function that prints a string in reverse
 * @s: string to print
 *
 * return: void
 * @version 0.1
 * @date 2022-04-27
 *
 * @copyright Copyright (c) 2022
 *
 */
void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}

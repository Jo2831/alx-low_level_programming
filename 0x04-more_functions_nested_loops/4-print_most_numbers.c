#include"main.h"
/**
 * print_most_numbers - print 0 - 9 apart
 *                 from 2 and 4 and you can
 *                 only use _putchar twice
 * Return: Always 0 (Success)
*/

void    print_most_numbers(void)
{
char c = '0';

while (c <= '9')
{
if (c == '2' || c == '4')
{
c++;
}
_putchar(c);
c++;
}
_putchar('\n');
}

#include<stdarg.h>
#include<stdio.h>
/**
 *print_numbers - print numbers
 *
 *@separator: it is speparater
 *
 *@n: length
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list argc;
va_start(argc, n);
for (i = 0; i < n; i++)
{
{
printf("%d", va_arg(argc, int));
if (separator && i != n - 1)
printf("%s", separator);

}
}
va_end(argc);
printf("\n");
}

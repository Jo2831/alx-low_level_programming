#include<stdarg.h>
/**
* sum_them_all - sum_them_all
*
*@n: length of parameter
*
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{

va_list argc;
unsigned int sum, i = 0;

va_start(argc, n);

for (i = 0; i < n; i++)
{
sum += va_arg(argc, int);
}
va_end(argc);

return (sum);
}


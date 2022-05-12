#include<stdarg.h>
#include"variadic_functions.h"
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
va_start(argc, n);
int sum = 0;
for (int i = 0; i < n; i++)
{
int x = va_arg(argc, int);
sum = sum + x;
}

va_end(argc);
return (sum);
}

#include<stdio.h>
/**
 *main - print all arguments
 *
 * @argc: number of arguments
 *
 *@argv: value of argument
 *
 *Return: 0
 */

int main(int argc, char **argv)
{
int i;
i = 0;
while (i < argc)
{
printf("all arguments = %s\n", argv[i]);
i++;
}
return (0);
}

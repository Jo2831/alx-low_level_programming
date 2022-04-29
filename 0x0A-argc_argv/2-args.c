#include<stdlib.h>
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

int main(char __attribute__((unused)) argc, char *argv[])
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
    char put[] = "_putchar";

    int i;
    i = 0;

    while (i < 8)
    {
        putchar(put[i]);
        i++;

    }
    putchar('\n');

    return (0);
    
}
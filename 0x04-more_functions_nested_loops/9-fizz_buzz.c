#include"main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 n 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int c;
c = 1;
char jo[] = "Fizz";
char miko[] = "Buzz";
char noal[] = "FizzBuzz";

while (c <= 100)
{
if (c % 3 == 0 && c % 5 == 0)
printf("%s\t", noal);
else if (c % 3 == 0)
printf("%s\t", jo);
else if (c % 5 == 0)
printf("%s\t", miko);
else
printf("%d\t", c);
c++;
return (0);
}


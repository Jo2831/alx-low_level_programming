#include <unistd.h>

/**
 * main - Entry point
 *
 * Descripton; print a quote using write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 *    Return:This time we return an error 1.
 */

int main(void)
{
	char quo[] = "and that piece of art is usefull\" -
		Dora Koraparr, 2015-19-19\n"
	write(1,quo,59);
	return (1);

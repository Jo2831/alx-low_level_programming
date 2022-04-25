
/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we will copy to
 * @src: what we are to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

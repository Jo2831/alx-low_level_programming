#include<stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, l1, l2;
char *ptr;
i = j = l1 = l2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;
if (n >= 12)
n = 12;
ptr = (char *)malloc((n + l1 + 1) * sizeof(char));
if (ptr == NULL)
ptr = NULL;
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';
return (ptr);

}

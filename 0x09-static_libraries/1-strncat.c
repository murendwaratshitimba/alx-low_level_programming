#include "main.h"

/**
* _strncat - Write a function that concatenates two strings
*
*it will use at most n bytes from src; and
*src does not need to be null-terminated if it contains n or more bytes
*
* @dest: This is the output  dest
* @src: This is the input src
* @n: This is the number bytes fro src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int index1, index2;

for (index1 = 0; dest[index1] != '\0'; index1++)
;
for (index2 = 0; index2 < n && src[index2] != '\0'; index2++)
{
dest[index1] = src[index2];
index1++;
}
if (index2 < n)
{
dest[index1] = '\0';
}
return (dest);
}

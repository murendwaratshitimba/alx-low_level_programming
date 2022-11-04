#include "main.h"

/**
*_strcat - Write a function that concatenates two strings.
*
*@dest: This is the output dest
*@src: This is the input source
*
*This function appends the src string to the dest string, overwriting
*the terminating null byte (\0) at the end of dest, and then adds a
*terminating null byte
*
* Return: This return to dest, that concatenates two strings
*/

char *_strcat(char *dest, char *src)
{
int index1, index2;

for (index1 = 0; dest[index1] != '\0'; index1++)
;
for (index2 = 0; src[index2] != '\0'; index2++)
{
dest[index1] = src[index2];
index1++;
}
return (dest);
}

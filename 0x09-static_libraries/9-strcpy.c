#include "main.h"

/**
* _strcpy - Copy strings from source arr to destination arr
*
* @dest: destination array (first parameter)
* @src: source array (second parameter)
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
*(dest + i) = src[i];
i++;
}

*(dest + i) = '\0';

return (dest);
}

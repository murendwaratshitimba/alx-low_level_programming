#include "main.h"
/**
*_memcpy - copies n bytes from memory area src to memory area dest
*ytes
*
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n:number of bytes to copy
*
*Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}

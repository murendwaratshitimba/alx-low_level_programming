#include "main.h"
/**
*_memset - fills memory with a constant byte
*fills the first n bytes of the memory area 
*pointed to by s with the constant byte b
*
*@s:target
*@b: constant byte
*@n:number of byte
*
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
#include <main.h>

/**
* _calloc - allocates memory for an array, using malloc, and initializes to 0
*
* @nmemb: number of elements of the array
* @size: size of each element of the array
*
* Return: pointer to the allocated memory (SUCCESS) or
* NULL if @nmemb or @size is 0 (FAILURE) or
* NULL if insufficient memory was available (FAILURE)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *p;

if (nmemb == 0 || size == 0)

{
return ('\0');

}


p = malloc(nmemb * size);

if (p == NULL)
{
return ('\0');

}

for (i = 0; i < nmemb * size; i++)
{
p[i] = 0;
}


return ((void *)p);
}

#include "main.h"

/**
* malloc_checked - allocates memory using malloc
*
* @b: size of memory to be allocated
*
* Return: pointer to the allocated memory (SUCCESS)
* or cause normal process termination with a status of value 98
*/
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
{
exit(98);
}

return (p);
}

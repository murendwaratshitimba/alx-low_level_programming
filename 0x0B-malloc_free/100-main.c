#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for ALX School students.
*
* @ac: count of args passed to the function
* @av:array of arguments
*
* Return: Always 0 (Success).
*/
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}

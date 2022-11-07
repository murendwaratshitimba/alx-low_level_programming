#include "main.h"

/**
* _strdup - gets  a pointer to a
* newly allocated space in memory,
* which contains a copy of the string
* given as a parameter
* @str:String to be copied
*
* Return: NULL if str = NULL (insufficient memory)or
* a pointer to the duplicated string (on success)
*/
char *_strdup(char *str)
{
char *cpy;
int index, length;

if (str == NULL)
{
return (NULL);
}

for (index = 0; str[index]; index++)
{
length++;
}

cpy = malloc(sizeof(char) * (length + 1));

if (cpy == NULL)
{
return (NULL);
}

for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}

cpy[length] = '\0';

return (cpy);

}

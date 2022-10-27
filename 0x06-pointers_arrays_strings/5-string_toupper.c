#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
*
* @s: This is the input string
*
* Return: Lowercase changed to uppercase of the string
*/
char *string_toupper(char *s)
{
int index = 0;
int d = 'a' - 'A';

for (index = 0; s[index] != '\0'; ++index)
{
if (s[index] >= 'a' && s[index] <= 'z')
{
s[index] = s[index] - d;
}
}
return (s);
}

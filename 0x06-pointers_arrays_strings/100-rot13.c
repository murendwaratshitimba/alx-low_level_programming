#include "main.h"
/**
* rot13 - Write a function that encodes a string using rot13
*
* @s: This is my input string
*
* Return: String converted to rot13
*
*/

char *rot13(char *s)
{
int index, count;

char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char j[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (index = 0; s[index] != '\0'; ++index)
{
for (count = 0; i[count] != '\0' ; count++)
{
if (s[index] == i[count])
{
s[index] = j[count];
break;
}
}
}
s[index] = '\0';
return (s);
}

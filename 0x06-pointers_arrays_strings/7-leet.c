#include "main.h"

/**
* leet - Write a function that encodes a string into 1337
*
* @s: This is the input string
*
* Return: String converted to 1337
*/

char *leet(char *s)
{
int index1, index2;
char small_letters[] = {'a', 'e', 'o', 't', 'l', '\0'};
char capital_letters[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char numbers[] = {'4', '3', '0', '7', '1', '\0'};

for (index1 = 0; s[index1] != '\0'; ++index1)
{
for (index2 = 0; index2 < 5; index2++)
{
if (s[index1] == small_letters[index2] || s[index1] == capital_letters[index2])
{
s[index1] = numbers[index2];
}
}
}
return (s);
}

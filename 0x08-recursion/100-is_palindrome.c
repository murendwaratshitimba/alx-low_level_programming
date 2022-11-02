#include "main.h"

/**
* _strlen_recursion - length of string
* @s:string
* Return:int (length of the string)
*/
int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
{
i++;
i += _strlen_recursion(s + 1);

}
return (i);
}
/**
* check_palindrome - checks to see if a string is a palindrome
* @i: first integer
* @j: second integer
* @s: string
* Return: int
* returns 1 if i is greater or equals j
* or 0 if char at index i is the same as a char at index j
*/
int check_palindrome(int i, int j, char *s)
{
if (i >= j)
return (1);
else if (s[i] != s[j])
return (0);
else
return (check_palindrome(i + 1, j - 1, s));
}
/**
* is_palindrome - states if a string is a palindrome
* @s:string
* Return: int (1 or 0)
*/
int is_palindrome(char *s)
{
int i;

i = _strlen_recursion(s) - 1;
return (check_palindrome(0, i, s));
}

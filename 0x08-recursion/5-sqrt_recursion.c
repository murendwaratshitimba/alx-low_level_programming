#include "main.h"
int process(int a, int b);

/**
* _sqrt_recursion - determines the natural square root of a number
*
* @n: integer
*
* Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{

if (n != 0)
{
return (process(1, n));
}
else
{
return (0);
}
}


/**
* process - checks for the square root
*
* @a: int first integer
* @b: int secind integer
*
* Return: int based on
* if a * a == b: return a
* if a * a > b: return -1
* if a * a != b or a * a < b: call the function agin with a replced by a + a
*/
int process(int a, int b)
{
if (a * a == b)
return (a);
if (a * a > b)
return (-1);
return (process(a + 1, b));
}

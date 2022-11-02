#include "main.h"

/**
* _pow_recursion - determines the value of x raised to the power of y
*
* @x: int
* @y: int
*
* Return: int based on the following
*
* if y < 0: return -1
* if y != 0: return x to the power of y
* if y == 0: return 1
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));

else
{
return (1);
}
}

#include "main.h"

/**
* factorial -  determines the factorial of a given number
*
* @n:int (given number)
*
* Return: the factorial of a number or -1 if n < 0
*/
int factorial(int n)
{
int x;

if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
x = n * factorial(n - 1);
}
return (x);

}

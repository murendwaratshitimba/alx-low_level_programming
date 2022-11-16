#include "3-calc.h"


/**
* op_add - calculates the sun of two integers
*
* @a: First Integer
* @b: Second Integer
*
* Return: the sum of a and b: (a + b)
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - calculates the difference of a and b
*
* @a: First Integer
* @b: Second Integer
*
* Return: the difference of a and b: (a - b)
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - calclates the  product of a and b
*
* @a: First Integer
* @b: Second Integer
*
*  Return: the  product of a and b: (a * b)
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - calculates the division of a by b
*
* @a: First Integer
* @b: Second Integer
*
*  Return: the result of the division of a by b
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}

/**
* op_mod - calculates the remainder of the division of a by b
*
* @a: First Integer
* @b: Second Integer
*
* Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}

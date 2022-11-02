#include "main.h"

/**
* process - checks to see if number is prime
*
* @a: first integer
* @b: second integer
*
* Return:int based on certain conditions specified by the
* conditionals statements
*/
int process(int a, int b)
{
if (b < 2 || b % a == 0)
return (0);
else if (a > b / 2)
return (1);
else
return (process(a + 1, b));
}

/**
* is_prime_number - states if number is prime
* @n:int
* Return: returns 1 if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (process(2, n));
}

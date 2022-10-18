#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @integer: integer input
 * Return: Absolute value of integer
 */
int _abs(int integer)

{
	return (integer * ((integer > 0) - (integer < 0)));
}

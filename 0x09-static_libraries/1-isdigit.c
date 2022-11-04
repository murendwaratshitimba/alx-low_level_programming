#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *@ascii_decimal_value: ASCII decimal value
 * Return: 0 or 1
 */

int _isdigit(int ascii_decimal_value)
{
if (ascii_decimal_value >= 48 && ascii_decimal_value <= 57)
{
return (1);
}

else
{
return (0);
}
}

#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 *
 * @integer: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int integer)
{
	if (integer > 0)
	{
		_putchar(43);

		return (1);
	}

	else if (integer < 0)

	{
		_putchar(45);

		return (-1);
	}

	else

	{
		_putchar(48);

		return (0);

	}

	_putchar('\n');
}

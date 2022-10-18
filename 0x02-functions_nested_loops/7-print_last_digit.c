#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @number: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int number)

{
	int last_digit;

	last_digit = (number % 10);

	if (last_digit < 0)

	{

		last_digit = (-1 * last_digit);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}

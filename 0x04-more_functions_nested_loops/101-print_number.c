#include "main.h"
/**
 * print_number - prints an integer.
 * @number_tested: number tested
 * Return: Always 0 (Success).
 */
void print_number(int number_tested)
{
	int i, j, digit, digits, power;
	unsigned int temp, num, number;

	digit = 0;
	if (number_tested < 0)
	{
		_putchar('-');
		temp = -number_tested;
	}
	else
	{
		temp = number_tested;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		digit++;
	}
	digits = digit + 1;
	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}
	j = power;
	while (j >= 1)
	{
		num = (temp / j) % 10;
		_putchar(num + '0');
		j = j / 10;
	}
}

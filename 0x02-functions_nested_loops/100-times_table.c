#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to param
 * @number: integer
 *
 * void: no retun value
 */
void print_times_table(int number)
{
	int row = 0;
	int column = 1;
	int multiple;

	if (number >= 0 && number <= 15)
	{
		while (row <= number)
		{
			_putchar(48);
			for (column = 1; column <= number; column++)
			{
				multiple = row * column;
				_putchar(44);
				_putchar(32);
				if (multiple <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(multiple + 48);
				}
				else if (multiple <= 99)
				{
					_putchar(32);
					_putchar((multiple / 10) + 48);
					_putchar((multiple % 10) + 48);
				}
				else
				{
					_putchar(((multiple / 100) % 10) + 48);
					_putchar(((multiple / 10) % 10) + 48);
					_putchar((multiple % 10) + 48);
				}
			}
			row++;
			_putchar('\n');
		}
	}
}

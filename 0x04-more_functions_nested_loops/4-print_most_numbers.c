#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int number;
for (number = 0; number < 10; number++)
{
if (number != 2 && number != 4)
_putchar(number + '0');
}
_putchar('\n');
}

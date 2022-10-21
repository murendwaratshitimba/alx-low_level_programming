#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: Always 0.
*/

void more_numbers(void)
{
int times;
int first_number;
int second_number;
int numbers;

for (times = 0; times < 10; times++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers < 10)
{
second_number = numbers;
}

else
{
first_number = numbers / 10;
second_number = numbers % 10;
_putchar (first_number + '0');
}

_putchar (second_number + '0');
}
numbers = 0;
_putchar ('\n');
}
}

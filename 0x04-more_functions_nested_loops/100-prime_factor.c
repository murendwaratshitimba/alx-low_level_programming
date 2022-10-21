#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0 (Sucess).
 */

int main(void)

{
long number, i;

number = 612852475143;
for (i = 2; i < number; i++)
{
while (number % i == 0)
number = number / i;
}

printf("%lu\n", number);

return (0);
}

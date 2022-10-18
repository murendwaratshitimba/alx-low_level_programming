#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{


	unsigned long count, first_number, second_number, next_number;

	first_number = 0;
	second_number = 1;

	while (count < 50)

	{
		next_number = first_number + second_number;
		first_number = second_number;
		second_number = next_number;

		printf("%lu", next_number);

		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}

		count++;
	}

	return (0);
}

#include <stdio.h>

/**
 * main - finds and prints the sum of
 * * the even-valued terms, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long count, first_number, second_number,
	next_number, sum_of_even_valued_terms;

	first_number = 0;
	sum_of_even_valued_terms = 0;
	second_number = 1;
	count = 0;

	while (count < 50)
	{
		next_number = first_number + second_number;

		first_number = second_number;
		second_number = next_number;

		if (next_number % 2 == 0 && next_number < 4000000)
		{
			sum_of_even_valued_terms += next_number;
		}
		count++;
	}

	printf("%lu\n", sum_of_even_valued_terms);

	return (0);
}

#include <stdio.h>

/**
 * main -  finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long first_number, second_number, next_number,
	m, n, p, r;

	count = 1;
	first_number = 0;
	second_number = 1;

	while (count <= 91)
	{
		next_number = first_number + second_number;
		first_number = second_number;
		second_number = next_number;
		printf("%lu, ", next_number);

		count++;
	}
	m = first_number % 1000;
	first_number = first_number / 1000;
	n = second_number % 1000;
	second_number = second_number / 1000;
	while (count <= 98)
	{
		r = (m + n) / 1000;
		p = (m + n) - r * 1000;
		next_number = (first_number + second_number) + r;
		m = n;
		n = p;
		first_number = second_number;
		second_number = next_number;
		if (p >= 100)
			printf("%lu%lu", next_number, p);
		else
			printf("%lu0%lu", next_number, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}

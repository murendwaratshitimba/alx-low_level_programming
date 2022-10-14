#include <stdio.h>

/**
 * main - Numbers
 * Description:  prints all single digit numbers
 * of base 10 starting from 0 then \n
 * Return: Always 0 (success)
 */
int main(void)

{
	int number;

	for (number = 0; number < 10; number++)

	{
		printf("%d", number);
	}

	putchar('\n');

	return (0);
}

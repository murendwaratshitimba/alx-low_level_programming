#include <stdio.h>


/**
 * main - Numberz
 * Description: prints all single digit numbers of
 * base 10 starting from 0 then \n
 * Return: Always 0 (success)
 */
int main(void)

{
	int number;

	for (number = 0; number < 10; number++)

	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}

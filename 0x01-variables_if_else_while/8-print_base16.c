#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase then \n
 * Return: Always 0 (success)
 */
int main(void)
{
	char number;
	char alphabet;


	for (number = '0'; number <= '9'; number++)

	{
		putchar(number);

	}

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)

	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}

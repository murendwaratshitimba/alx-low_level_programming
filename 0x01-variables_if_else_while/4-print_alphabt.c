#include <stdio.h>

/**
 * main - Entry point
 * Description:  prints the alphabet in lowercase, followed by \n
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet != 'q' && alphabet != 'e')

		{
			putchar(alphabet);
		}

	}

	putchar('\n');

	return (0);
}

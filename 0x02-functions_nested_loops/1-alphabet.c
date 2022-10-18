#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		display(alphabet);
	}

	display('\n');
}
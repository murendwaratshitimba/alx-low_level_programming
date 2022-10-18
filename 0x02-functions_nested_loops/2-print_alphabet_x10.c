#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int count = 0;

	for (count=0; count < 10; count++){

	
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar (alphabet);
		}
		
		_putchar('\n');

	}
	
}
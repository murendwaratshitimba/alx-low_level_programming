#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @letter: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int letter)

{
	return (((letter >= 'a') && (letter <= 'z')) ||
		((letter >= 'A') && (letter <= 'Z')));

}

#include "main.h"

/**
 * _islower - checks for lowercase character
 * @character: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int character)

{

	if (character >= 'a' && character <= 'z')

	{
		return (1);

	} else {

		return (0);
	}

}

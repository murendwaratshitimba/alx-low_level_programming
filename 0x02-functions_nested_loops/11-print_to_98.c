#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @natural_number: number input
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int natural_number)
{
	if (natural_number < 98)
	{
		while (natural_number <= 98)

		{
			printf("%i", natural_number);

			if (natural_number != 98)

			{
				printf(", ");
			}
			natural_number++;
		}
	}
	else if (natural_number > 98)
	{
		while (natural_number >= 98)
		{
			printf("%i", natural_number);

			if (natural_number != 98)

			{
				printf(", ");
			}
			natural_number--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

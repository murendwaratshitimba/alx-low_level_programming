#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line. But for multiples
 * of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three
 * and five print FizzBuzz
 *
 * Return: void
 */

int main(void)
{

int max = 100;
int number;

number = 1;
for (number = 1; number <= max; number++)
{
if (number % 3 == 0 && number % 5 == 0)
{
printf("FizzBuzz ");
}

else if (number % 3 == 0)
{
printf("Fizz ");
}

else if (number % 5 == 0)
{
if (number < max)
printf("Buzz ");

else
printf("Buzz");
}

else
{
printf("%i ", number);
}

}
printf("\n");
return (0);
}

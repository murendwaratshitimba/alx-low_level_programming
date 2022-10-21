#include "main.h"

/**
* print_triangle - prints triangle
* @size: triangle size (integer)
* Return: Always 0 (Success).
*/
void print_triangle(int size)

{

int row, column;

if (size > 0)
{
for (row = 1; row <= size; row++)
{

for (column = row; column < size; column++)
{
_putchar(' ');
}

for (column = 1; column <= row; column++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}


}

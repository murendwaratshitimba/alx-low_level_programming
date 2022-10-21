#include "main.h"
/**
* print_diagonal - prints diagonal line
*@n: integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int row;
int column;

if (n > 0)
{
for (row = 0; row < n; row++)
{
for (column = 0; column < row; column++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}


else
{
_putchar ('\n');
}

}

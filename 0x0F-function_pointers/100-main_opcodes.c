#include <stdlib.h>
#include <stdio.h>

/**
* print_opcodes - print the opcodes of this program
* @a: address of the main function
* @n: number of bytes to print
*
* Return: void
*/
void print_opcodes(char *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

}

/**
* main - prints the opcodes of its own main function
*
* @count: argument count
* @argv: argument vector
*
* Return: O
*/
int main(int count, char **argv)
{

int converted_arg_to_int;

if (count != 2)
{
printf("Error\n");
exit(1);
}
converted_arg_to_int = atoi(argv[1]);
if (converted_arg_to_int < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, converted_arg_to_int);
return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers
*
* @argc: argument count for main
* @argv: vector to the arguments
*
* Return: 1 or 0 based on:
*
* 1 if the program doesn't receive two arguments
* or 0 if two arguments are received by the program
*/
int main(int argc, char *argv[])
{
int mul = 0;

if (argc == 3)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
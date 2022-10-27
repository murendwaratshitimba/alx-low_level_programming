#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
*
* @a: This is the input array
* @n: This is the positions have the array
*
* Return: no return value
*
*/
void reverse_array(int *a, int n)
{
int index, last;

last = n - 1;
for (index = 0; index < n / 2; index++)
{
int start, end;

start = a[index];
end = a[last];
a[index] = end;
a[last] = start;
last--;
}
}

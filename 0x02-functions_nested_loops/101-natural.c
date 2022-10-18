#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{

	int count = 0;
	int max = 1024;
	unsigned long int multiple_of_3_sum = 0;
	unsigned long int multiple_of_5_sum = 0;
	unsigned long int sum_of_all_3_and_5_sum = 0;

	while (count <= max)
	{
		if ((count % 3) == 0)
		{
			multiple_of_3_sum = multiple_of_3_sum + count;
		} else if ((count % 5) == 0)
		{
			multiple_of_5_sum = multiple_of_5_sum + count;
		}
		++count;
	}

	sum_of_all_3_and_5_sum = multiple_of_3_sum + multiple_of_5_sum;
	printf("%lu\n", sum_of_all_3_and_5_sum);
	return (0);
}

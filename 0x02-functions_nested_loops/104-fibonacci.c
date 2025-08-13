#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long a_high = 0, b_high = 0;
	unsigned long sum, sum_high;
	int count;

	for (count = 1; count <= 98; count++)
	{
		if (a_high > 0)
		{
			printf("%lu%010lu", a_high, a);
		}
		else
		{
			printf("%lu", a);
		}

		if (count != 98)
		{
			printf(", ");
		}

		sum = a + b;
		sum_high = a_high + b_high;

		if (sum < a)
		{
			sum_high++;
		}

		a = b;
		a_high = b_high;
		b = sum;
		b_high = sum_high;
	}
	printf("\n");
	return (0);
}

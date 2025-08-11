#include <stdio.h>

/**
 * sum_of_multiples - Computes the sum of all natural numbers below `limit`
 *                    that are multiples of 3 or 5.
 * @limit: The upper bound (excluded).
 *
 * Return: The computed sum.
 */
int sum_of_multiples(int limit)
{
	int i, sum = 0;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int result;

	result = sum_of_multiples(1024);
	printf("%d\n", result);

	return (0);
}

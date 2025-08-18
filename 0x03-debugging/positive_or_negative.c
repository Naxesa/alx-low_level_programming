#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - asigns a random number to n and prints whether
 * it is positive, negative, or zero
 * @i: the int to test
 * Return: Always 0(Success)
 */
void positive_or_negative(int i)
{

		srand(time(0));
		i = rand() - RAND_MAX / 2;

		if (i > 0)
			printf("%d is positive\n", i);
		else if (i == 0)
			printf("%d is zero\n", i);
		else
			printf("%d is negative\n", i);
}

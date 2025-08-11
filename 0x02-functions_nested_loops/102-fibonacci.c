#include <stdio.h>

/**
 * print_fibonacci - Prints the first `count` Fibonacci numbers
 * @count: Number of Fibonacci numbers to print
 *
 * Description: Starts with 1 and 2, prints each number separated
 * by a comma and space, followed by a newline.
 */
void print_fibonacci(int count)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;
	int i;

	if (count >= 1)
		printf("%lu", fib1);
	if (count >= 2)
		printf(", %lu", fib2);

	for (i = 3; i <= count; i++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci(50);
	return (0);
}

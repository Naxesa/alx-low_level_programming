#include "main.h"

/**
 * print_number - prints a number with formatting
 * @num: the number to print
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_row - prints one row of the times table
 * @row: the row number
 * @n: the max number in the table
 */
void print_row(int row, int n)
{
	int col, result;

	for (col = 0; col <= n; col++)
	{
		result = row * col;

		if (col == 0)
		{
			_putchar(result + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			print_number(result);
		}
	}
	_putchar('\n');
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number to generate the table for
 */
void print_times_table(int n)
{
	int i;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		print_row(i, n);
	}
}

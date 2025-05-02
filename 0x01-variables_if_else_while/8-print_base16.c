#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits  = '0';
	char letters = 'a';


	while (digits <= '9')
	{
		putchar(digits);
		digits++;
	}


	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}


	putchar('\n');
	return (0);
}

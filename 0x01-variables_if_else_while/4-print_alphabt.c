#include <stdio.h>

/**
 * main - Print alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}

		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

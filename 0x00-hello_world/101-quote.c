#include <unistd.h>

/**
 * main - Entry point
 * Return: Show an error(per req)
 * write: Acts as print/Puts
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

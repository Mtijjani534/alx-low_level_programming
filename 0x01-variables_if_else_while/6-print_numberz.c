#include <stdio.h>

/**
 * main - Print numbers from 0 to 9 without using the 'char' variable.
 *
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

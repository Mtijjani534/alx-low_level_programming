#include <stdio.h>

/**
 * main - It prints all possible combination of single numbers
 * Return: 0
 */

int main(void)
{
	int x;
	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

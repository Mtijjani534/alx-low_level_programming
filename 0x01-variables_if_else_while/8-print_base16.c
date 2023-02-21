#include <stdio.h>

/**
 * main - It prints the number from '0' to '9' and lowercase 'a' to 'f'
 *
 * Return: 0
 */

int main(void)
{
	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
	putchar("\n");
	return (0);
}

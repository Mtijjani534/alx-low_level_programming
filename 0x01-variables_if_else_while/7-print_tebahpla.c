#include <stdio.h>

/**
 * main - It Prints the lowercase alphabet in reverse order.
 *
 * Return: 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}

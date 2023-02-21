#include <stdio.h>

/**
 * main - It prints the number from '0' to '9' and lowercase 'a' to 'f'
 *
 * Return: 0
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}

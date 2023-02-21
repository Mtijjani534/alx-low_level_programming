#include <stdio.h>

/**
 * main -Alphabet in lowercase with the exception of letter 'q' and 'e'.
 *
 * Return: 0.
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
	}

	putchar('\n');
	return (0);
}

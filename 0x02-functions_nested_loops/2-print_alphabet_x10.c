#include "main.h"

/**
 * print_alphabet_x10 - It  prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int x;
	char alpha;

	x = 0

	while (x <= 9)
	{
		alpha = 'a'
		while(alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		x++;
	}
}

#include "main.h"
/**
 * print_rev - It prints the string in reverse order followed by newline
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int alpha = 0;
	int c;

	while (*s != '\0')
	{
		alpha++;
		s++;
	}
	s--;
	for (c = alpha; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

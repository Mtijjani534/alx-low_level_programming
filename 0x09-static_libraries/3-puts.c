#include "main.h"
/**
 * _puts - It  prints a string, followed by a new line, to standard output
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

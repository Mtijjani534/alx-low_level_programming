#include "main.h"

/**
 * print_sign - It prints the sign of a number.
 * Return: if the number is greater than zero it'll return 1
 * 		It'll return 0 if the number is 0
 *		and -1 if the number is less than zero.
 * @n: The number of which the sign will be printed.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

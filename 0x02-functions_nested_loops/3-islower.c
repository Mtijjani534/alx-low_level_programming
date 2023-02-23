#include "main.h"

/**
 * _islower - It checks wether if a character is lowercase or not.
 * Return: 1 if character is lowercase, and 0 if not.
 * @c: The character to be checked.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

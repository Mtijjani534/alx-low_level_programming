#include "main.h"

/**
 * _isalpha - It checks if a character is alphabetic or not.
 * Return: 1 if character is alphabet, and 0 if not.
 * @c: The character to be checked.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

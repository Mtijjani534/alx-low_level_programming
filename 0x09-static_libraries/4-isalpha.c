#include "main.h"

/**
 * _isalpha -I It checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

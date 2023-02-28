#include "main.h"
/**
 * rev_string - It reverses a string
 * @s: Input str
 * Return: Reverse the string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int x;

	while (s[length] != '\0')
	length++;
	for (x = 0; x < length; x++)
	{
		length--;
		rev = s[x];
		s[x] = s[length];
		s[length] = rev;
	}
}

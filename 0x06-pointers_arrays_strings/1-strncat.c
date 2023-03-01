#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n number of bytes from source
 * @dest: input destination value
 * @src: input source value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[y] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}

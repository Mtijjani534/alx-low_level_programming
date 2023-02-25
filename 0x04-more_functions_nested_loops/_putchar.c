#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character 'c' to standard output
 * @c: This is the character to print
 * Return: 1 if successfull and return -1 if error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character 'c' to standard output
 * Return: 1
 * While on error , -1 is going to be returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

#include <stdio.h>
#include "main.h"

/**
 * main - It prints the numbers from 1-100 followed by a newline
 *
 * Description: prints the numbers 1 - 100 w/
 * Buzz for multiples of 5, fizz for multiples of 3,
 * and FizzBuzz for multiples of both
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%i", x);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

#include "main.h"

/**
 * print_last_digit - check the code
 *
 * @q: call var
 *
 * Return: Always 0.
 */

int print_last_digit(int q)
{
	int k;

	k = q % 10;
	if (k < 0)
		k = -k;

	/* k = q % 10; */
	_putchar(k + '0');
	return (k);
}

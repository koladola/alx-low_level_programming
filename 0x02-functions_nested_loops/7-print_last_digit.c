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

	if (q < 0)
		q = -q;

	k = q % 10;
	_putchar(k + '0');
	return (k);
}

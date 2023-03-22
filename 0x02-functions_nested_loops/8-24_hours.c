#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int x, y;
	/* int k = 0; */

	for (x = 00; x < 24; x++)
	{
		for (y = 00; y < 60; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
	}
}

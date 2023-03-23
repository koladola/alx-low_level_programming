#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int x, y, k;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			k = x * y;
			if ((y != 9) && (k > 9))
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((k > 9) && (y == 9))
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else if ((y < 9) && (k <= 9))
			{
				_putchar(' ');
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((y == 9) && (k <= 9))
			{
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}



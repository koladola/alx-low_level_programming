#include <stdio.h>
/**
 * main - mai func
 *
 * Return: o if okay
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}


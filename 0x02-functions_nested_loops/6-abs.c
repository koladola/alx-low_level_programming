#include "main.h"

/**
 * _abs -  absolute value
 * @a: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int a)
{
	if (a > 0)
		a = a;
	else if (a < 0)
	{
		a = -(a);
	}
	return (a);
}

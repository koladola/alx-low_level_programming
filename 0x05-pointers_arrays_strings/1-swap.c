
#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: global var 1
 * @b: Global var 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

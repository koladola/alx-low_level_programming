#include "main.h"

/**
 * _strncpy- check the code
 *
 * @dest: destination
 * @src:source
 * @n:count
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}

#include "main.h"

/**
 * _strncat- check the code
 *
 * @dest: destination
 * @n: count
 * @src:source
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y, j;
	int destcount = 0;
	int srccount = 0;

	for (x = 0; dest[x] != '\0'; x++)
		destcount++;
	for (y = 0; src[y] != '\0'; y++)
		srccount++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[destcount + j] = src[j];

	return (dest);
}

#include "main.h"

/**
 * _strcat- check the code
 *
 * @dest: destination
 * @src:source
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int x, y, j;
	int destcount = 0;
	int srccount = 0;

	for (x = 0; dest[x] != '\0'; x++)
		destcount++;
	for (y = 0; src[y] != '\0'; y++)
		srccount++;
	for (j = 0; j <= srccount; j++)
		dest[destcount + j] = src[j];
	return (dest);
}

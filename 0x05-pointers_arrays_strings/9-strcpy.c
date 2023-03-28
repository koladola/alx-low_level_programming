#include "main.h"
/**
 * _strcpy - check the code
 * @dest: kkkk
 * @src: kkk
 *
 * Return: Always 0.
 */


char *_strcpy(char *dest, char *src)
{
	int x;
	int y = 0;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

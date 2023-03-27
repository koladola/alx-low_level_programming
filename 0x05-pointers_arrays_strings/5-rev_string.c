#include "main.h"
/**
 * rev_string - imprime en reversa
 * @s: string
 * return: 0
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char *k = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	
	for (i = count; i > 0; i--)
	{
		k[i]= s[i];
		s--;
	}
}

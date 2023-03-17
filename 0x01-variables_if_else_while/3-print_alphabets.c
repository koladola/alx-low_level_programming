#include <stdio.h>
#include <string.h>
/**
 * main - function to print alphabet
 *
 * Return: 0 if okay
 */

int main(void)
{
	char i;
	char k;
	/*char collector = 'a';*/

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	/* putchar(collector);*/
	putchar('\n');
	return (0);
}

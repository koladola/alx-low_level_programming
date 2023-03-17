#include <stdio.h>
/**
 * main - mainfunc
 *
 * Return: o if okay
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

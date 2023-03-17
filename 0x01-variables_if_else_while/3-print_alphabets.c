#include <stdio.h>
/**
 * main - function to print alphabet
 *
 * Return: 0 if okay
 */

int main(void)
{
	char i;
	char k;
	char collector = 'a';

	for (i = 'b'; i <= 'z'; i++)
	{
		collector += i;
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		collector += k;
	}
	putchar(collector);
	putchar('\n');
	return (0);
}

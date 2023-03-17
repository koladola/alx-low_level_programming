#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - maim function
 *
 * Return: Zero for success
 */
int main(void)
{
	int n;
	int kolade;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (kolade > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, kolade);
	else if (kolade == 0)
		printf("Last digit of %d is %d and is 0\n", n, kolade);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, kolade);
	return (0);
}

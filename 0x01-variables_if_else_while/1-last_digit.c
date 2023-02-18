#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-entry point
 * Return: Always 0(Success)
*/
int main(void)
{
	int n;
	int an;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	an = n % 10;

	if (an > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, an);
	} else if (an == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, an);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, an);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
/**
 * main-program to determine positive or negative
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n, "%d is positive");
	}else if(n = 0)
	{
		printf(n, "%d is zero");
	}else
	{
		printf(n, "%d is negative");
	}
	return (0);
}

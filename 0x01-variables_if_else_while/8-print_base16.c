#include <stdio.h>
/**
 * main- print all base 16 numbers
 * Return: Always 0
*/
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
		putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - lowercase alphabeth in reverse order
 * Return: Always 0(Success)
*/
int main(void)
{
	char alp;

	for (alp = 'z'; alp < 'a'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}

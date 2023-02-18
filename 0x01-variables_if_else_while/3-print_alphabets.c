#include <stdio.h>
/**
 * main- print upper and lowercase alphabets
 * Return: Always 0 (success)
*/
int main(void)
{
	char alp;
	char alph;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
		alph = toupper(alp);
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

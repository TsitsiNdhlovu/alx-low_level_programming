#include <stdio.h>
/**
 * main- prints lowercase except q and e
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'q' || alp == 'e')
		{
			continue;
		}
		putchar(alp);
	}
	putchar('\n');
	return (0);
}


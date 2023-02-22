#include "main.h"
/**
 * print_alphabet_x10-print lowercase alphebets 10 times
 *
*/
void print_alphabet_x10(void)
{
	int n;
	char let;

	for (n = 0; n <= 9; n++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_alphabet(void)- print alphabet lowercase
*/
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}

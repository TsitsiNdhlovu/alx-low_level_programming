#include "main.h"

/**
 * print_numbers- print from 0 to 9
 *
 * Return: 0 always
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}

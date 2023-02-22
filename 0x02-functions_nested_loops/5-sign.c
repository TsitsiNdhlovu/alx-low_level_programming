#include "main.h"
/**
 * print_sign- return sign value of number
 * @n: number to check for value
 * Return: 0, 1 or -1
*/
int print_sign(int n)
{
	if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

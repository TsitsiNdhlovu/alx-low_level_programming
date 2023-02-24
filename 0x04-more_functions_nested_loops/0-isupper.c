#include "main.h"

/**
 * _isupper- print uppercase character
 * @n: number to be checked
 * Return: 1 or 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

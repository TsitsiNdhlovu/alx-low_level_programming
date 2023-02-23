#include "main.h"
/**
 * jack_bauer- print every minute of the day
 *
*/
void jack_bauer(void)
{
	int mins;
	int secs;

	for (mins = 0; mins <= 23; mins++)
	{
		for (secs = 0; secs <= 59; secs++)
		{
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar(':');
			_putchar(secs / 10 + '0');
			_putchar(secs % 10 + '0');
			_putchar('\n');
		}
	}
}

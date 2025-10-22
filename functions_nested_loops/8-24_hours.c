#include "main.h"

/**
 * jack_bauer - prints time starting from 0:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
			if (minute > 59)
			{
				minute = 0;
			}
		}
		hour++;
	}
}

#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function that prints the album
 * Return: it returns nothing
*/

void jack_bauer(void)
{
	int startTimeSecs, endTimeSecs;
	int startTimeHour, endTimeHour;

	endTimeSecs = 60;
	endTimeHour = 24;

	for (startTimeHour = 0; startTimeHour < endTimeHour; startTimeHour++)
		for (startTimeSecs = 0; startTimeSecs < endTimeSecs; startTimeSecs++)
		{
			_putchar((startTimeHour / 10) + '0');
			_putchar((startTimeHour % 10) + '0');
			_putchar(':');
			_putchar((startTimeSecs / 10) + '0');
			_putchar((startTimeSecs % 10) + '0');
			_putchar('\n');
		}

}

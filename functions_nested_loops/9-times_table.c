#include "main.h"

void times_table(void)
{
	int i, j, x;

	for(j = 0; j < i; j++)
	{
		for(i = 0; i <= 9; i++)
		{
			x = i * j;

			if(x > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				if(i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

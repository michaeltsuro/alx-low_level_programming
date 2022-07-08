#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for(i = 48; i <= 62; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

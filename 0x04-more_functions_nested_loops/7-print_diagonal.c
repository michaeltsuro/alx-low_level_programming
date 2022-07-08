#include "main.h"

/**
 * print_diagonal - prints newline and append \$ at end
 * @n: number of newlines
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; j++)
			{
				_putchar('');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - prints newline and append \$ at end
 * @n: number of newlines
 */
void print_diagonal(int n)
{
	int j;
	char blank[11];

	if (n > 0)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar(blank[j]);
			
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar(' ');
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to check
 */
void print_to_98(int n)
{
	if (n>98)
	{
		while (n>=98)
		{
			_putchar('%d',n);
			if (n!=98)
			{
				_putchar(',');
			}
			n--;
		}
	}
	else
	{
		while (n<=98)
		{
			_putchar('%d',n);
			if (n!=98)
			{
				_putchar(',');
			}
			n++
		}
	}
	_putchar('\n');
}

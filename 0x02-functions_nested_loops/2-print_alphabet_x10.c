#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times in lowercase
 */
void print_alphabet_x10(void)
{
	int a;

	char letter;

	for (a = 0; a < 10; a++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;

		}
		_putchar('\n');
	}
}

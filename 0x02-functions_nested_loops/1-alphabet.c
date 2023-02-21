#include "includes.c"
#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 *
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}



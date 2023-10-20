#include "main.h"


/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int j, letter;

	for (j = 0; j < 11; j++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

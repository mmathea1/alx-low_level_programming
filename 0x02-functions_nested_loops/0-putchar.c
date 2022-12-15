#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(text[i]);

	return (0);
}

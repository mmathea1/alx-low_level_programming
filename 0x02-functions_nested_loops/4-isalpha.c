#include "main.h"

/**
 * _isalpha - checks for lower and uppercase character.
 * @c: character to be checked
 *
 * Return: 1 if lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);

}

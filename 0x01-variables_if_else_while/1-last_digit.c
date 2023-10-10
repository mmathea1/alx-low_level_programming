#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigit;
	char *text;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	if (lastDigit > 5)
	{
		text = "and is greater than 5";
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		text = "and is less than 6 and not 0";
	}
	else if (lastDigit == 0)
	{
		text = "and is 0";
	}
	else
	{
		text = "None";
	}
	printf("Last digit of %d is %d %s\n", n, lastDigit, text);

	return (0);
}

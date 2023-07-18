#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: the last digit of a number
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * (n % 10);
	else
		n = n % 10;

	_putchar(n + '0');
	return (n);
}

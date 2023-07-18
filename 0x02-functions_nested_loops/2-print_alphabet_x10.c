#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	for (int line = 0; line < 10; ++line)
	{
		for (char c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}

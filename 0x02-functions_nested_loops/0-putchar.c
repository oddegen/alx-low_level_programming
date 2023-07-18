#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c[] = "_putchar";
	int length = sizeof(c) / sizeof(c[0]);

	for (int i = 0; i < length; ++i)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}

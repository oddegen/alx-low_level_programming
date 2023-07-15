#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabest in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');

	return (0);
}

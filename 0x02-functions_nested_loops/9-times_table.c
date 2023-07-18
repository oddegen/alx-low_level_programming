#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * Format:
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9
 * 0,  2,  4,  6,  8, 10, 12, 14, 16, 18
 * 0,  3,  6,  9, 12, 15, 18, 21, 24, 27
 * 0,  4,  8, 12, 16, 20, 24, 28, 32, 36
 * 0,  5, 10, 15, 20, 25, 30, 35, 40, 45
 * 0,  6, 12, 18, 24, 30, 36, 42, 48, 54
 * 0,  7, 14, 21, 28, 35, 42, 49, 56, 63
 * 0,  8, 16, 24, 32, 40, 48, 56, 64, 72
 * 0,  9, 18, 27, 36, 45, 54, 63, 72, 81
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get the first digit*/

			_putchar((prod % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}

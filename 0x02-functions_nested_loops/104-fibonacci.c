#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count = 0, fib1 = 1, fib2 = 2, sum = 0;

	printf("1, 2, ");
	while (count <= 96)
	{
		sum = fib1 + fib2;
		++count;

		if (count != 96)
			printf("%d, ", sum);
		else
			printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	printf("\n");

	return (0);
}

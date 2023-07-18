#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4 million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	float even_sum = 0;

	while (sum < 4000000)
	{
		sum = fib1 + fib2;

		if ((sum % 2) == 0)
			even_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", even_sum);

	return (0);
}

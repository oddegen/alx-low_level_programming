#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int param, sum = 0;

	/* initialize the argument list from the start */
	va_start(args, n);

	/* iterate through all parameter values*/
	for (param = 0; param < n; param++)
		/* get the next parameter value and add it to sum*/
		sum += va_arg(args, int);
	/*Clean up*/
	va_end(args);

	return (sum);
}

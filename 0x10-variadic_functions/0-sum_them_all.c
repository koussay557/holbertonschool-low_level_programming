#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}

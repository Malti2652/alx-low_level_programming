#include "main.h"

/**
 * largest_number - returns the largest of 3 number
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b n>= a && b >=c)
	{
		largest = b;
	}
	else if (c >= a && c >=b)
	{
		largest = c;
	}

	return (largest);
}
